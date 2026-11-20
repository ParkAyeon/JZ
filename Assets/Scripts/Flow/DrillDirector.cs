using System.Collections.Generic;
using UnityEngine;

public enum DrillState
{
    Init, Select, Instructions, HomeSetup, ConfigPreview, Ready,
    WaitHome, Countdown, Outbound, ReturnHome, Interval,
    Complete, Results, Aborted, AbortPanel
}

/// <summary>
/// 전체 흐름. 프로토타입의 상태 머신을 그대로 옮긴 것.
///
///   Init → Select → Instructions → HomeSetup → ConfigPreview → Ready
///        → WaitHome → Countdown(3초) → Outbound → ReturnHome → (Interval) → … → Complete → Results
///   훈련 종료 버튼 → Aborted → AbortPanel
///
/// 측정 구간: 지시가 켜진 순간 → 홈 복귀 완료
/// 결과: 대기 모드는 왕복 평균 시간, 연속 모드는 총 소요시간
/// </summary>
public class DrillDirector : MonoBehaviour
{
    [Header("구성")]
    public TrainingSettings settings;
    public CourseLayout layout;
    public HomeSetup homeSetup;
    public GuidePanel panel;
    public Scoreboard board;
    public DrillAudio drillAudio;
    [Tooltip("월드에 떠 있는 '훈련 종료' 버튼")]
    public WorldButton exitButton;

    [Header("타이밍 (프로토타입과 동일)")]
    public float initSec = 1.2f;
    public float countdownSec = 3f;
    public float startFlashSec = 0.7f;
    public float resultDelaySec = 2f;
    public float voiceRepeatSec = 5f;

    [Header("디버그")]
    [Tooltip("켜면 전광판에 정답이 보인다. 실제 훈련에서는 반드시 끌 것")]
    public bool debugShowAnswer = false;

    public DrillState State { get; private set; } = DrillState.Init;
    public int Training { get; private set; } = 1;

    private struct Lap { public int round; public string name; public float sec; }

    private readonly List<Lap> laps = new List<Lap>();
    private int completed;
    private int activeSlot = -1;
    private int activeNumber;
    private float tStart, firstStart, lastHome, result;
    private int cd;
    private bool armed;
    private float flashUntil, nextRepeat, stateEnter;

    private float T => Time.time - stateEnter;
    private bool Wait => settings != null && settings.ModeFor(Training) == DrillMode.Wait;
    private int Reps => settings != null ? settings.reps : 10;
    private DrillZone Active => activeSlot >= 0 ? layout.Target(activeSlot) : null;

    private static readonly DrillState[] ActiveStates =
        { DrillState.WaitHome, DrillState.Countdown, DrillState.Outbound, DrillState.ReturnHome, DrillState.Interval };

    // ---------- 수명 ----------

    private void Start()
    {
        if (settings == null || layout == null || homeSetup == null || panel == null || board == null)
        {
            Debug.LogError("[Director] 연결이 비어 있습니다. Inspector 를 확인하세요.");
            return;
        }

        if (exitButton != null) exitButton.Pressed += _ => Abort();
        settings.Changed += OnSettingsChanged;

        layout.Apply(Training);
        Go(DrillState.Init);
    }

    private void OnDestroy()
    {
        if (settings != null) settings.Changed -= OnSettingsChanged;
    }

    private void OnSettingsChanged()
    {
        layout.Apply(Training);          // ± 를 누르면 실제 타깃이 즉시 움직인다
        panel.RefreshRows();
    }

    // ---------- 상태 전이 ----------

    private void Go(DrillState s)
    {
        State = s;
        stateEnter = Time.time;

        // 안내판 위치: 홈이 정해지기 전에는 사용자를 따라오고, 그 뒤에는 홈 앞에 고정
        switch (s)
        {
            case DrillState.Init:
            case DrillState.Select:
            case DrillState.Instructions:
            case DrillState.HomeSetup:
                panel.followUser = true;
                panel.PlaceInFrontOfUser();
                break;
            case DrillState.ConfigPreview:
            case DrillState.Ready:
            case DrillState.Results:
            case DrillState.AbortPanel:
                panel.followUser = false;
                panel.PlaceAtHomeFront(layout.courseRoot);
                break;
        }

        BuildPage();
        Paint();
        Debug.Log($"[Director] → {s}");
    }

    private void Update()
    {
        switch (State)
        {
            case DrillState.Init:
                if (T > initSec) Go(DrillState.Select);
                break;

            case DrillState.WaitHome:
                if (layout.home.IsInside) { cd = (int)countdownSec; drillAudio.Count(); Go(DrillState.Countdown); }
                break;

            case DrillState.Countdown:
                if (!layout.home.IsInside)
                {
                    Debug.Log("[Director] 홈 이탈 — 카운트다운 취소");
                    Go(DrillState.WaitHome);
                    break;
                }
                if (T >= countdownSec)
                {
                    if (Training == 2 && settings.randomizeNumbers) layout.ShuffleNumbers();
                    flashUntil = Time.time + startFlashSec;
                    drillAudio.StartCue();
                    StartRound();
                }
                else
                {
                    int n = (int)countdownSec - Mathf.FloorToInt(T);
                    if (n != cd) { cd = n; drillAudio.Count(); }
                }
                break;

            case DrillState.Outbound:
            {
                var a = Active;
                if (a == null) break;

                if (!a.IsInside) armed = true;      // 지시 순간 이미 안에 있었다면 나갔다 들어와야 인정

                if (a.IsInside && armed)
                {
                    drillAudio.Success();
                    Debug.Log($"[Director] 통과 — {RoundName()}  {Time.time - tStart:0.00}s");
                    Go(DrillState.ReturnHome);
                }
                else if (Training == 2 && Time.time >= nextRepeat)
                {
                    PlayVoice();
                    nextRepeat = Time.time + voiceRepeatSec;
                    Debug.Log("[Director] 같은 번호 재안내");
                }
                break;
            }

            case DrillState.ReturnHome:
                if (layout.home.IsInside) FinishLap();
                break;

            case DrillState.Interval:
                if (T >= settings.IntervalFor(Training)) StartRound();
                break;

            case DrillState.Complete:
                if (T >= resultDelaySec) Go(DrillState.Results);
                break;

            case DrillState.Aborted:
                if (T >= resultDelaySec) Go(DrillState.AbortPanel);
                break;
        }

        Paint();
    }

    // ---------- 회차 ----------

    private void ResetRun()
    {
        completed = 0;
        laps.Clear();
        activeSlot = -1;
        activeNumber = 0;
        firstStart = -1f;
        lastHome = 0f;
        result = 0f;
        flashUntil = 0f;
        StopVoice();
    }

    private void StartRound()
    {
        if (Training == 1)
        {
            activeSlot = Random.Range(0, 3);
            activeNumber = 0;
            drillAudio.Instruct();
        }
        else
        {
            activeNumber = 1 + Random.Range(0, 4);
            activeSlot = layout.SlotOfNumber(activeNumber);
        }

        tStart = Time.time;
        if (firstStart < 0f) firstStart = tStart;

        var a = Active;
        armed = a == null || !a.IsInside;
        if (!armed) Debug.Log("[Director] 이미 타깃 안에 있음 — 나갔다 다시 들어와야 인정");

        Go(DrillState.Outbound);

        if (Training == 2)
        {
            PlayVoice();
            nextRepeat = tStart + voiceRepeatSec;
        }

        Debug.Log($"[Director] {completed + 1}/{Reps} 지시 — {RoundName()}");
    }

    private void FinishLap()
    {
        float sec = Time.time - tStart;
        lastHome = Time.time;
        completed++;
        laps.Add(new Lap { round = completed, name = RoundName(), sec = sec });

        activeSlot = -1;
        activeNumber = 0;

        if (completed >= Reps)
        {
            result = Wait ? Total() / Mathf.Max(1, laps.Count) : lastHome - firstStart;
            drillAudio.Done();
            drillAudio.EndAfter(0.35f);
            Debug.Log($"[Director] 종료 — {completed}회, 기록 {result:0.00}초");
            Go(DrillState.Complete);
        }
        else
        {
            drillAudio.Done();
            Debug.Log($"[Director] 회차 완료 {completed}/{Reps}  {sec:0.00}s");
            if (Training == 2 && settings.randomizeNumbers) layout.ShuffleNumbers();

            if (Wait) Go(DrillState.Interval);
            else StartRound();
        }
    }

    private void PlayVoice()
    {
        var a = Active;
        if (a != null) drillAudio.PlayNumber(activeNumber, a.voice);
    }

    private void StopVoice()
    {
        for (int i = 0; i < layout.targets.Length; i++)
        {
            var t = layout.targets[i];
            if (t != null && t.voice != null) t.voice.Stop();
        }
    }

    private string RoundName()
        => Training == 1
            ? $"타깃 {layout.SlotName(activeSlot, 1)}"
            : $"{activeNumber}번 ({layout.SlotName(activeSlot, 2)})";

    private float Total()
    {
        float s = 0f;
        for (int i = 0; i < laps.Count; i++) s += laps[i].sec;
        return s;
    }

    // ---------- 버튼 동작 ----------

    private void Abort()
    {
        if (!System.Array.Exists(ActiveStates, s => s == State)) return;
        StopVoice();
        Debug.Log("[Director] 수동 중단");
        Go(DrillState.Aborted);
    }

    private void Retry()
    {
        ResetRun();
        layout.Apply(Training);
        Go(DrillState.WaitHome);
    }

    private void PickTraining(int t)
    {
        Training = t;
        layout.Apply(Training);
        Go(DrillState.Instructions);
    }

    // ---------- 안내판 ----------

    private string TrainingName()
        => Training == 1 ? "훈련 1: 타깃 찍고 복귀" : "훈련 2: 사방 타깃·소리 반응";

    private void BuildPage()
    {
        switch (State)
        {
            case DrillState.Init:
                panel.ShowMessage("초기화 중", new[] { "바닥 기준을 확보하고 있어요." });
                break;

            case DrillState.Select:
                panel.ShowChoices("훈련을 선택하세요", null,
                    new GuidePanel.ButtonSpec("훈련 1: 타깃 찍고 복귀", true, () => PickTraining(1)),
                    new GuidePanel.ButtonSpec("훈련 2: 사방 타깃·소리 반응", true, () => PickTraining(2)));
                break;

            case DrillState.Instructions:
                panel.ShowMessage(TrainingName(), new[]
                {
                    Training == 1
                        ? "주황색 타깃 안으로 이동한 뒤, 주황색으로 바뀐 홈으로 돌아오세요."
                        : "음성으로 부르는 번호의 원기둥 안으로 이동한 뒤, 주황색 홈으로 돌아오세요."
                },
                    new GuidePanel.ButtonSpec("뒤로", false, () => Go(DrillState.Select)),
                    new GuidePanel.ButtonSpec("다음", true, () => Go(DrillState.HomeSetup)));
                break;

            case DrillState.HomeSetup:
            {
                var lines = new List<string> { "출발할 자리에 서서 훈련 방향을 바라보세요." };
                if (!string.IsNullOrEmpty(homeSetup.LastRejection)) lines.Add(homeSetup.LastRejection);

                panel.ShowMessage("홈 설정", lines.ToArray(),
                    new GuidePanel.ButtonSpec("여기를 홈으로 설정", true, () =>
                    {
                        if (homeSetup.TrySetHome())
                        {
                            layout.Apply(Training);
                            Go(DrillState.ConfigPreview);
                        }
                        else BuildPage();     // 거부 사유를 안내판에 띄운다
                    }));
                break;
            }

            case DrillState.ConfigPreview:
                panel.ShowConfig("설정·배치 확인", Training, settings,
                    new GuidePanel.ButtonSpec("홈 다시 설정", false, () => Go(DrillState.HomeSetup)),
                    new GuidePanel.ButtonSpec("기본값으로 되돌리기", false, () => settings.ResetToDefaults()),
                    new GuidePanel.ButtonSpec("이 배치로 확정", true, () => Go(DrillState.Ready)));
                break;

            case DrillState.Ready:
                panel.ShowMessage("준비 완료", new[]
                {
                    TrainingName(),
                    $"{settings.ModeName(Training)} · {Reps}회",
                    settings.LayoutSummary(Training)
                },
                    new GuidePanel.ButtonSpec("설정으로 돌아가기", false, () => Go(DrillState.ConfigPreview)),
                    new GuidePanel.ButtonSpec("훈련 시작", true, () => { ResetRun(); Go(DrillState.WaitHome); }));
                break;

            case DrillState.Results:
                panel.ShowMessage("훈련 완료", new[]
                {
                    $"{TrainingName()} · {settings.ModeName(Training)}",
                    $"완료 {completed}/{Reps}",
                    $"{(Wait ? "왕복 평균 시간" : "총 소요시간")} {result:0.00}초",
                    settings.LayoutSummary(Training)
                },
                    new GuidePanel.ButtonSpec("훈련 선택", false, () => Go(DrillState.Select)),
                    new GuidePanel.ButtonSpec("같은 설정으로 다시 하기", true, Retry));
                break;

            case DrillState.AbortPanel:
                panel.ShowMessage("훈련 중단", new[]
                {
                    $"완료 {completed}/{Reps}",
                    "이번 시도는 정상 기록에서 제외됩니다."
                },
                    new GuidePanel.ButtonSpec("훈련 선택", false, () => Go(DrillState.Select)),
                    new GuidePanel.ButtonSpec("같은 설정으로 다시 하기", true, Retry));
                break;

            default:
                panel.Hide();     // 훈련 중에는 안내판을 띄우지 않는다
                break;
        }
    }

    // ---------- 외형 ----------

    private void Paint()
    {
        bool active = System.Array.Exists(ActiveStates, s => s == State);
        bool zonesOn = active || State == DrillState.ConfigPreview || State == DrillState.Ready;

        layout.SetZonesVisible(zonesOn);

        if (layout.home != null)
            layout.home.SetStatus(
                State == DrillState.WaitHome || State == DrillState.Countdown || State == DrillState.ReturnHome
                    ? ZoneStatus.Cue : ZoneStatus.Idle);

        for (int i = 0; i < layout.targets.Length; i++)
        {
            var t = layout.targets[i];
            if (t == null || !t.gameObject.activeSelf) continue;

            var st = ZoneStatus.Idle;
            if (i == activeSlot)
            {
                if (State == DrillState.ReturnHome) st = ZoneStatus.Success;
                else if (State == DrillState.Outbound && Training == 1) st = ZoneStatus.Cue;
                // 훈련 2는 통과하기 전까지 회색 — 소리로만 찾는다
            }
            t.SetStatus(st);
        }

        if (exitButton != null)
        {
            var go = exitButton.gameObject;
            if (go.activeSelf != active) go.SetActive(active);
        }

        board.SetVisible(homeSetup.IsSet);
        PaintBoard();
    }

    private void PaintBoard()
    {
        string body = "";
        bool big = false;

        switch (State)
        {
            case DrillState.WaitHome:
                body = "홈으로 이동하세요";
                break;
            case DrillState.Countdown:
                body = cd.ToString(); big = true;
                break;
            case DrillState.Outbound:
            case DrillState.ReturnHome:
            case DrillState.Interval:
                if (Time.time < flashUntil) { body = "시작"; big = true; }
                else body = $"완료 {completed}/{Reps}";
                break;
            case DrillState.Complete:
            case DrillState.Results:
                body = "훈련 완료";
                break;
            case DrillState.Aborted:
            case DrillState.AbortPanel:
                body = "훈련 중단";
                break;
        }

        if (debugShowAnswer && State == DrillState.Outbound && activeSlot >= 0)
            body = Training == 2 ? $"{activeNumber} {layout.SlotName(activeSlot, 2)}" : layout.SlotName(activeSlot, 1);

        board.Show(body, big);
    }
}
