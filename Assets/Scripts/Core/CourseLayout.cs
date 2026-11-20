using UnityEngine;

/// <summary>
/// 홈(CourseRoot)을 원점으로 모든 가상 요소를 배치한다. 좌표는 홈이 바라보는 방향이 +Z.
///
///   홈          (0, 0, 0)
///   훈련 1      A(-s1, 0, d1)  B(0, 0, d1)  C(s1, 0, d1)      ← 세 개 모두 같은 깊이
///   훈련 2      앞(0,0,d2) 좌(-d2,0,0) 우(d2,0,0) 뒤(0,0,-d2)
///   전광판      (0, 3.8, 10)
///   종료 버튼   (1.2, 2.1, 1.5)  홈을 바라봄
///
/// 설정을 바꾸면 Apply() 를 다시 불러 실제 타깃이 즉시 움직인다.
/// </summary>
public class CourseLayout : MonoBehaviour
{
    [Header("기준")]
    [Tooltip("홈 설정 때 사용자 위치/방향으로 옮겨지는 부모")]
    public Transform courseRoot;

    [Header("영역")]
    public DrillZone home;
    [Tooltip("훈련 1은 앞 3개만 쓴다. 훈련 2는 순서가 앞·좌·우·뒤")]
    public DrillZone[] targets = new DrillZone[4];

    [Header("설치물")]
    public Transform boardRoot;
    public Transform exitRoot;

    [Header("고정 위치 (홈 기준)")]
    [Tooltip("전광판 받침 위치. 판 자체는 이 아래 자식에서 y 3.8 로 올린다")]
    public Vector3 boardPosition = new Vector3(0f, 0f, 10f);
    public Vector3 exitPosition = new Vector3(1.2f, 2.1f, 1.5f);

    public TrainingSettings settings;

    /// <summary>slotNumber[슬롯] = 그 원기둥에 적힌 번호 (훈련 2)</summary>
    public int[] SlotNumbers { get; private set; } = { 1, 2, 3, 4 };

    public int UsedCount { get; private set; } = 3;

    private static readonly string[] Names1 = { "A", "B", "C" };
    private static readonly string[] Names2 = { "앞", "왼쪽", "오른쪽", "뒤" };

    private void Awake()
    {
        if (home != null)
        {
            home.id = "HOME";
            home.SetLabel("홈");
            home.transform.SetParent(courseRoot, false);
            home.transform.localPosition = Vector3.zero;
            home.transform.localRotation = Quaternion.identity;
        }

        foreach (var t in targets)
            if (t != null) t.transform.SetParent(courseRoot, false);

        PlaceFixtures();
    }

    private void PlaceFixtures()
    {
        if (boardRoot != null)
        {
            boardRoot.SetParent(courseRoot, false);
            boardRoot.localPosition = boardPosition;
            boardRoot.localRotation = Quaternion.identity;
        }

        if (exitRoot != null)
        {
            exitRoot.SetParent(courseRoot, false);
            exitRoot.localPosition = exitPosition;
            float yaw = Mathf.Atan2(exitPosition.x, exitPosition.z) * Mathf.Rad2Deg;
            exitRoot.localRotation = Quaternion.Euler(0f, yaw, 0f);     // 홈을 향함
        }
    }

    /// <summary>훈련 번호와 현재 설정으로 타깃을 배치한다</summary>
    public void Apply(int training)
    {
        if (settings == null) return;

        // 홈이 옮겨졌을 수 있으니 판정 상태를 지우고 다시 재다
        if (home != null && home.trigger != null) home.trigger.ResetState();

        if (training == 1)
        {
            float d = settings.frontDistance, s = settings.sideGap;
            Vector3[] pos = { new Vector3(-s, 0f, d), new Vector3(0f, 0f, d), new Vector3(s, 0f, d) };
            UsedCount = 3;

            for (int i = 0; i < targets.Length; i++)
            {
                var t = targets[i];
                if (t == null) continue;

                bool used = i < 3;
                t.gameObject.SetActive(used);
                if (!used) continue;

                t.transform.localPosition = pos[i];
                t.transform.localRotation = Quaternion.identity;
                t.id = Names1[i];
                t.SetLabel(Names1[i]);
                t.SetNumber(0);                 // 글자 모드
                if (t.trigger != null) t.trigger.ResetState();
            }
        }
        else
        {
            float d = settings.ringDistance;
            Vector3[] pos = { new Vector3(0f, 0f, d), new Vector3(-d, 0f, 0f), new Vector3(d, 0f, 0f), new Vector3(0f, 0f, -d) };
            UsedCount = 4;

            for (int i = 0; i < targets.Length; i++)
            {
                var t = targets[i];
                if (t == null) continue;

                t.gameObject.SetActive(true);
                t.transform.localPosition = pos[i];
                t.transform.localRotation = Quaternion.identity;
                t.id = Names2[i];
                t.SetNumber(SlotNumbers[i]);    // 숫자 모드
                if (t.trigger != null) t.trigger.ResetState();
            }
        }
    }

    /// <summary>번호-위치 매핑을 섞고 라벨을 갱신 (훈련 2, 번호 랜덤 ON)</summary>
    public void ShuffleNumbers()
    {
        for (int i = SlotNumbers.Length - 1; i > 0; i--)
        {
            int j = Random.Range(0, i + 1);
            (SlotNumbers[i], SlotNumbers[j]) = (SlotNumbers[j], SlotNumbers[i]);
        }

        for (int i = 0; i < targets.Length; i++)
            if (targets[i] != null && targets[i].gameObject.activeSelf) targets[i].SetNumber(SlotNumbers[i]);

        Debug.Log($"[Layout] 번호 배열 — 앞{SlotNumbers[0]} 좌{SlotNumbers[1]} 우{SlotNumbers[2]} 뒤{SlotNumbers[3]}");
    }

    /// <summary>번호가 적힌 원기둥의 슬롯 번호</summary>
    public int SlotOfNumber(int number)
    {
        for (int i = 0; i < SlotNumbers.Length; i++) if (SlotNumbers[i] == number) return i;
        return 0;
    }

    public DrillZone Target(int slot)
        => slot >= 0 && slot < targets.Length ? targets[slot] : null;

    public string SlotName(int slot, int training)
        => training == 1
            ? (slot >= 0 && slot < Names1.Length ? Names1[slot] : "?")
            : (slot >= 0 && slot < Names2.Length ? Names2[slot] : "?");

    public void SetZonesVisible(bool on)
    {
        if (home != null) home.SetVisible(on);
        for (int i = 0; i < targets.Length; i++)
            if (targets[i] != null && targets[i].gameObject.activeSelf) targets[i].SetVisible(on);
    }
}
