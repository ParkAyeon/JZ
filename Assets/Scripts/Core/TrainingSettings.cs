using System;
using System.Collections.Generic;
using UnityEngine;

public enum DrillMode { Wait, Continuous }   // 1.0/2.0 대기  ·  1.1/2.1 연속

/// <summary>
/// 설정값과 그 범위. Inspector 에 적어 둔 값이 '기본값'이 되고,
/// 안내판의 '기본값으로 되돌리기' 는 그 값으로 돌아간다.
/// </summary>
public class TrainingSettings : MonoBehaviour
{
    [Header("모드")]
    public DrillMode mode1 = DrillMode.Wait;
    public DrillMode mode2 = DrillMode.Wait;

    [Header("공통")]
    [Range(5, 20)] public int reps = 10;
    [Range(0, 100)] public int volume = 60;

    [Header("훈련 1 배치")]
    [Range(2f, 5f)] public float frontDistance = 3f;    // d1 정면 거리
    [Range(1.5f, 3f)] public float sideGap = 2f;        // s1 좌우 간격

    [Header("훈련 2 배치")]
    [Range(2f, 5f)] public float ringDistance = 3f;     // d2 사방 거리
    public bool randomizeNumbers = false;

    // 범위 (프로토타입 DEF 와 동일)
    public const int RepsMin = 5, RepsMax = 20, RepsStep = 1;
    public const float D1Min = 2f, D1Max = 5f, DStep = 0.5f;
    public const float S1Min = 1.5f, S1Max = 3f;
    public const float D2Min = 2f, D2Max = 5f;
    public const int VolMin = 0, VolMax = 100, VolStep = 10;

    public event Action Changed;

    /// <summary>Inspector 에 적힌 값을 그대로 기본값으로 보관한다</summary>
    private struct Snapshot
    {
        public DrillMode m1, m2;
        public int reps, volume;
        public float d1, s1, d2;
        public bool rand;
    }

    private Snapshot defaults;
    private bool captured;

    private void Awake()
    {
        if (captured) return;
        defaults = new Snapshot
        {
            m1 = mode1, m2 = mode2, reps = reps, volume = volume,
            d1 = frontDistance, s1 = sideGap, d2 = ringDistance, rand = randomizeNumbers
        };
        captured = true;
    }

    public void ResetToDefaults()
    {
        if (!captured) return;
        mode1 = defaults.m1; mode2 = defaults.m2;
        reps = defaults.reps; volume = defaults.volume;
        frontDistance = defaults.d1; sideGap = defaults.s1;
        ringDistance = defaults.d2; randomizeNumbers = defaults.rand;
        Raise();
    }

    public void Raise() => Changed?.Invoke();

    public DrillMode ModeFor(int training) => training == 1 ? mode1 : mode2;

    /// <summary>대기 모드의 회차 간 대기 시간(초). 연속 모드는 0</summary>
    public float IntervalFor(int training) => ModeFor(training) == DrillMode.Wait ? 1f : 0f;

    public string ModeName(int training)
    {
        bool wait = ModeFor(training) == DrillMode.Wait;
        return training == 1 ? (wait ? "1.0 대기" : "1.1 연속") : (wait ? "2.0 대기" : "2.1 연속");
    }

    public string LayoutSummary(int training) => training == 1
        ? $"정면 {frontDistance:0.#}m · 좌우 {sideGap:0.#}m"
        : $"사방 {ringDistance:0.#}m · 번호 랜덤 {(randomizeNumbers ? "ON" : "OFF")}";

    public float Volume01 => Mathf.Clamp01(volume / 100f);

    // ---------- 안내판이 그릴 설정 행 ----------

    public abstract class RowSpec { public string label; }

    public class AdjustRow : RowSpec
    {
        public Func<string> value;
        public Action minus, plus;
        public Func<bool> minusEnabled, plusEnabled;
    }

    public class SegmentRow : RowSpec
    {
        public string[] options;
        public Func<int> index;
        public Action<int> choose;
    }

    public List<RowSpec> BuildRows(int training)
    {
        var rows = new List<RowSpec>();

        rows.Add(new SegmentRow
        {
            label = "모드",
            options = training == 1 ? new[] { "1.0 대기", "1.1 연속" } : new[] { "2.0 대기", "2.1 연속" },
            index = () => (int)ModeFor(training),
            choose = i => { if (training == 1) mode1 = (DrillMode)i; else mode2 = (DrillMode)i; Raise(); }
        });

        rows.Add(Adjust("반복 횟수", () => $"{reps}회",
            () => { reps = Mathf.Max(RepsMin, reps - RepsStep); Raise(); },
            () => { reps = Mathf.Min(RepsMax, reps + RepsStep); Raise(); },
            () => reps > RepsMin, () => reps < RepsMax));

        if (training == 1)
        {
            rows.Add(Adjust("정면 거리", () => $"{frontDistance:0.#}m",
                () => { frontDistance = Step(frontDistance, -DStep, D1Min, D1Max); Raise(); },
                () => { frontDistance = Step(frontDistance, DStep, D1Min, D1Max); Raise(); },
                () => frontDistance > D1Min + 1e-4f, () => frontDistance < D1Max - 1e-4f));

            rows.Add(Adjust("좌우 간격", () => $"{sideGap:0.#}m",
                () => { sideGap = Step(sideGap, -DStep, S1Min, S1Max); Raise(); },
                () => { sideGap = Step(sideGap, DStep, S1Min, S1Max); Raise(); },
                () => sideGap > S1Min + 1e-4f, () => sideGap < S1Max - 1e-4f));
        }
        else
        {
            rows.Add(Adjust("사방 거리", () => $"{ringDistance:0.#}m",
                () => { ringDistance = Step(ringDistance, -DStep, D2Min, D2Max); Raise(); },
                () => { ringDistance = Step(ringDistance, DStep, D2Min, D2Max); Raise(); },
                () => ringDistance > D2Min + 1e-4f, () => ringDistance < D2Max - 1e-4f));

            rows.Add(new SegmentRow
            {
                label = "번호 랜덤",
                options = new[] { "OFF", "ON" },
                index = () => randomizeNumbers ? 1 : 0,
                choose = i => { randomizeNumbers = i == 1; Raise(); }
            });
        }

        rows.Add(Adjust("음량", () => $"{volume}%",
            () => { volume = Mathf.Max(VolMin, volume - VolStep); Raise(); },
            () => { volume = Mathf.Min(VolMax, volume + VolStep); Raise(); },
            () => volume > VolMin, () => volume < VolMax));

        return rows;
    }

    private static AdjustRow Adjust(string label, Func<string> value, Action minus, Action plus,
                                    Func<bool> minusEnabled, Func<bool> plusEnabled)
        => new AdjustRow { label = label, value = value, minus = minus, plus = plus,
                           minusEnabled = minusEnabled, plusEnabled = plusEnabled };

    private static float Step(float v, float d, float lo, float hi)
        => Mathf.Clamp(Mathf.Round((v + d) / DStep) * DStep, lo, hi);
}
