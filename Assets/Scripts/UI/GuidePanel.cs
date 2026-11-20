using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

/// <summary>
/// 월드에 고정된 안내판. 상태마다 제목·본문·설정행·버튼을 바꿔 그린다.
///
/// Canvas 는 World Space, RectTransform 1280 × 880, Scale 0.00125 → 실제 1.6 × 1.1 m
/// 프로토타입의 픽셀 좌표를 그대로 쓸 수 있다 (1 px = 1.25 mm).
///
/// 배치 두 가지
///   PlaceInFrontOfUser() : 홈이 정해지기 전 — 머리 앞 (좌우 방향만 사용)
///   PlaceAtHomeFront()   : 홈이 정해진 뒤 — 홈 기준 (0, 1.5, 2) 에서 홈을 바라봄
/// </summary>
public class GuidePanel : MonoBehaviour
{
    public struct ButtonSpec
    {
        public string label;
        public bool primary;
        public Action onClick;

        public ButtonSpec(string label, bool primary, Action onClick)
        { this.label = label; this.primary = primary; this.onClick = onClick; }
    }

    [Header("내용")]
    public TMP_Text titleText;
    public TMP_Text bodyText;

    [Header("컨테이너")]
    public RectTransform rowsRoot;
    public RectTransform buttonsRoot;

    [Header("프리팹")]
    public SettingRow rowPrefab;
    public WorldButton buttonPrefab;

    [Header("레이아웃 (Canvas 픽셀, 프로토타입과 동일)")]
    public float panelWidth = 1280f;
    public float panelHeight = 880f;
    public float margin = 60f;
    public float rowTop = 140f;
    public float rowPitch = 104f;
    public float rowHeight = 86f;
    public float buttonGap = 24f;
    public float buttonHeight = 100f;
    public float buttonBottom = 730f;      // PH - 150
    public float buttonBottomCompact = 750f; // PH - 130 (설정 화면)

    [Header("선택 화면 (버튼을 위아래로 쌓음)")]
    public float choiceTop = 230f;
    public float choiceHeight = 190f;
    public float choicePitch = 220f;

    [Header("배치")]
    public float userDistance = 1.6f;
    public float userHeight = 1.5f;
    [Tooltip("홈 기준 위치 (홈이 바라보는 방향이 +Z)")]
    public Vector3 homeLocalPosition = new Vector3(0f, 1.5f, 2f);

    [Header("사용자 따라오기 (홈이 정해지기 전에만 켠다)")]
    public bool followUser = false;
    public float followDistance = 2.2f;
    public float followAngle = 75f;
    public float followDelay = 0.8f;

    private readonly List<SettingRow> rows = new List<SettingRow>();
    private readonly List<WorldButton> buttons = new List<WorldButton>();

    public bool IsVisible { get; private set; }

    private void Awake()
    {
        StretchFull(rowsRoot);
        StretchFull(buttonsRoot);
        Hide();
    }

    /// <summary>컨테이너가 패널 전체를 덮게 맞춘다 (수동 설정 실수 방지)</summary>
    private static void StretchFull(RectTransform rt)
    {
        if (rt == null) return;
        rt.anchorMin = Vector2.zero;
        rt.anchorMax = Vector2.one;
        rt.pivot = new Vector2(0.5f, 0.5f);
        rt.offsetMin = Vector2.zero;
        rt.offsetMax = Vector2.zero;
        rt.localScale = Vector3.one;
        rt.localRotation = Quaternion.identity;

        var lp = rt.localPosition;
        lp.z = 0f;
        rt.localPosition = lp;
    }

    public void Hide()
    {
        IsVisible = false;
        gameObject.SetActive(false);
    }

    private void ShowRoot()
    {
        IsVisible = true;
        gameObject.SetActive(true);
    }

    // ---------- 페이지 ----------

    public void ShowMessage(string title, string[] lines, params ButtonSpec[] specs)
    {
        ShowRoot();
        if (titleText != null) titleText.text = title ?? "";
        if (bodyText != null) bodyText.text = lines != null ? string.Join("\n", lines) : "";
        ClearRows();
        LayoutButtons(specs, buttonBottom, buttonHeight, false);
    }

    /// <summary>훈련 선택처럼 큰 버튼을 위아래로 쌓는 페이지</summary>
    public void ShowChoices(string title, string[] lines, params ButtonSpec[] specs)
    {
        ShowRoot();
        if (titleText != null) titleText.text = title ?? "";
        if (bodyText != null) bodyText.text = lines != null ? string.Join("\n", lines) : "";
        ClearRows();
        LayoutButtons(specs, choiceTop, choiceHeight, true);
    }

    public void ShowConfig(string title, int training, TrainingSettings settings, params ButtonSpec[] specs)
    {
        ShowRoot();
        if (titleText != null) titleText.text = title ?? "";
        if (bodyText != null) bodyText.text = "";

        ClearRows();
        var specsRows = settings.BuildRows(training);
        for (int i = 0; i < specsRows.Count; i++)
        {
            var row = Instantiate(rowPrefab, rowsRoot);
            var rt = (RectTransform)row.transform;
            rt.anchorMin = rt.anchorMax = new Vector2(0f, 1f);
            rt.pivot = new Vector2(0f, 1f);
            rt.sizeDelta = new Vector2(panelWidth - margin * 2f, rowHeight);
            rt.anchoredPosition = new Vector2(margin, -(rowTop + i * rowPitch));

            if (specsRows[i] is TrainingSettings.AdjustRow a) row.BindAdjust(a);
            else if (specsRows[i] is TrainingSettings.SegmentRow s) row.BindSegment(s);

            rows.Add(row);
        }

        LayoutButtons(specs, buttonBottomCompact, 96f, false);
    }

    /// <summary>설정이 바뀐 뒤 각 행의 값·활성 상태를 다시 읽는다</summary>
    public void RefreshRows()
    {
        for (int i = 0; i < rows.Count; i++) if (rows[i] != null) rows[i].Refresh();
    }

    // ---------- 내부 ----------

    private void ClearRows()
    {
        for (int i = 0; i < rows.Count; i++) if (rows[i] != null) Destroy(rows[i].gameObject);
        rows.Clear();
    }

    private void LayoutButtons(ButtonSpec[] specs, float top, float height, bool vertical)
    {
        for (int i = 0; i < buttons.Count; i++) if (buttons[i] != null) Destroy(buttons[i].gameObject);
        buttons.Clear();

        if (specs == null || specs.Length == 0) return;

        int n = specs.Length;
        float full = panelWidth - margin * 2f;
        float w = vertical ? full : (full - buttonGap * (n - 1)) / n;

        for (int i = 0; i < n; i++)
        {
            var b = Instantiate(buttonPrefab, buttonsRoot);
            var rt = (RectTransform)b.transform;
            rt.anchorMin = rt.anchorMax = new Vector2(0f, 1f);
            rt.pivot = new Vector2(0f, 1f);
            rt.sizeDelta = new Vector2(w, height);
            rt.anchoredPosition = vertical
                ? new Vector2(margin, -(top + i * choicePitch))
                : new Vector2(margin + i * (w + buttonGap), -top);

            var spec = specs[i];
            b.Configure(spec.label, spec.primary ? WorldButton.Style.Primary : WorldButton.Style.Normal,
                        true, spec.onClick);
            buttons.Add(b);
        }
    }

    // ---------- 배치 ----------

    /// <summary>머리 앞에 놓는다 (좌우 방향만 사용하므로 고개를 숙이고 있어도 눈높이에 똑바로 선다)</summary>
    public void PlaceInFrontOfUser()
    {
        var cam = Camera.main;
        if (cam == null) return;

        float yaw = Mathf.Atan2(cam.transform.forward.x, cam.transform.forward.z) * Mathf.Rad2Deg;
        Vector3 fwd = Quaternion.Euler(0f, yaw, 0f) * Vector3.forward;

        Vector3 p = cam.transform.position + fwd * userDistance;
        p.y = userHeight;

        transform.SetParent(null, true);
        transform.SetPositionAndRotation(p, Quaternion.Euler(0f, yaw, 0f));
    }

    /// <summary>홈 앞에 놓는다. 홈에 서 있는 사람이 정면으로 읽는 위치</summary>
    public void PlaceAtHomeFront(Transform courseRoot)
    {
        if (courseRoot == null) { PlaceInFrontOfUser(); return; }
        transform.SetParent(courseRoot, false);
        transform.localPosition = homeLocalPosition;
        transform.localRotation = Quaternion.identity;
    }

    // 홈이 정해지기 전에는 사용자가 걸어가도 안내판이 따라온다
    private float awaySince = -1f;

    private void LateUpdate()
    {
        if (!IsVisible || !followUser) return;

        var cam = Camera.main;
        if (cam == null) return;

        Vector3 to = transform.position - cam.transform.position;
        to.y = 0f;
        Vector3 look = cam.transform.forward;
        look.y = 0f;
        if (to.sqrMagnitude < 1e-4f || look.sqrMagnitude < 1e-4f) return;

        bool off = to.magnitude > followDistance || Vector3.Angle(look, to) > followAngle;

        if (off)
        {
            if (awaySince < 0f) awaySince = Time.time;
            else if (Time.time - awaySince >= followDelay) { PlaceInFrontOfUser(); awaySince = -1f; }
        }
        else awaySince = -1f;
    }
}
