using TMPro;
using UnityEngine;

public enum ZoneStatus { Idle, Cue, Success }

/// <summary>
/// 홈·타깃 하나의 판정 + 외형 + 라벨. 프로토타입의 makeCyl() 에 대응.
///
/// 외형은 코드가 만든다 (Unity 기본 도형에 '링'과 '뚜껑 없는 원기둥'이 없음):
///   Shell      뚜껑 없는 원기둥 옆면 (반투명, 양면)
///   FloorRing  바닥 테두리 링
///   TopRing    상단 테두리 링
///   LabelRoot  눈높이 1.5m 라벨 — Y축으로만 사용자를 향함
///     Circle   숫자 모드일 때 글자를 감싸는 흰 링 (+ 어두운 외곽선)
///     Text     TMP 글자 (프리팹에서 연결)
///     Check    통과 성공 배지 (초록 원판 + 체크)
///
/// 색 규칙: 원기둥과 링만 상태색(회색/주황/초록)으로 바뀌고, 글자와 링은 항상 흰색.
/// </summary>
public class DrillZone : MonoBehaviour
{
    [Header("식별")]
    public string id = "A";
    [Tooltip("글자 모드에서 보일 문구 (예: A, 홈)")]
    public string displayLabel = "A";

    [Header("연결 (프리팹에서)")]
    public HeadTrigger trigger;
    public AudioSource voice;
    public Transform labelRoot;
    public TMP_Text labelText;

    [Header("재질 (프리팹에서)")]
    [Tooltip("M_Zone — URP Unlit · Transparent · Render Face Both")]
    public Material shellMaterial;
    [Tooltip("M_Band — URP Unlit · Opaque · Render Face Both")]
    public Material solidMaterial;

    [Header("모양")]
    public float radius = 0.5f;
    public float height = 2f;
    public float labelHeight = 1.5f;
    public float floorRingWidth = 0.035f;
    public float topRingWidth = 0.02f;
    public float numberCircleRadius = 0.28f;
    public float numberCircleWidth = 0.031f;
    public float checkSize = 0.2f;
    public Vector2 checkOffset = new Vector2(0.235f, 0.225f);

    [Header("색")]
    public Color idleColor = new Color32(0x9A, 0xA3, 0xAD, 0xFF);
    public Color cueColor = new Color32(0xFF, 0x8A, 0x1F, 0xFF);
    public Color successColor = new Color32(0x37, 0xD6, 0x7A, 0xFF);
    public Color outlineColor = new Color32(0x0A, 0x0E, 0x12, 0xD9);
    [Range(0f, 1f)] public float idleAlpha = 0.26f;
    [Range(0f, 1f)] public float activeAlpha = 0.42f;

    [Header("글자 크기 (라벨 박스 한 변, m)")]
    public float letterBox = 0.46f;
    public float numberBox = 0.34f;

    public bool IsInside => trigger != null && trigger.IsInside;
    public float Distance => trigger != null ? trigger.LastDistance : float.MaxValue;
    public ZoneStatus Status { get; private set; } = ZoneStatus.Idle;
    public int Number { get; private set; }

    private MeshRenderer shell, floorRing, topRing, circle, circleEdge, checkDisc, checkMark;
    private bool built, statusApplied;

    private void Awake()
    {
        if (trigger == null) trigger = GetComponent<HeadTrigger>();
        if (voice == null) voice = GetComponent<AudioSource>();
        Build();
        SetNumber(0);
        SetStatus(ZoneStatus.Idle);
    }

    private void Build()
    {
        if (built) return;
        built = true;

        if (trigger != null) trigger.enterRadius = radius;

        var flat = Quaternion.Euler(90f, 0f, 0f);   // XY 링을 바닥에 눕힘

        shell = ZoneMeshes.Spawn(transform, "Shell",
            ZoneMeshes.OpenCylinder(radius, height), shellMaterial, Vector3.zero, Quaternion.identity);

        floorRing = ZoneMeshes.Spawn(transform, "FloorRing",
            ZoneMeshes.AnnulusXY(radius - floorRingWidth, radius), solidMaterial,
            new Vector3(0f, 0.012f, 0f), flat);

        topRing = ZoneMeshes.Spawn(transform, "TopRing",
            ZoneMeshes.AnnulusXY(radius - topRingWidth, radius), solidMaterial,
            new Vector3(0f, height, 0f), flat);

        if (labelRoot == null)
        {
            var go = new GameObject("LabelRoot");
            go.transform.SetParent(transform, false);
            labelRoot = go.transform;
        }
        labelRoot.localPosition = new Vector3(0f, labelHeight, 0f);

        // 숫자를 감싸는 링 — 어두운 외곽선을 살짝 뒤가 아니라 더 크게 깔아 흰 링을 또렷하게
        circleEdge = ZoneMeshes.Spawn(labelRoot, "CircleEdge",
            ZoneMeshes.AnnulusXY(numberCircleRadius - numberCircleWidth - 0.008f, numberCircleRadius + 0.008f),
            solidMaterial, new Vector3(0f, 0f, 0.004f), Quaternion.identity);

        circle = ZoneMeshes.Spawn(labelRoot, "Circle",
            ZoneMeshes.AnnulusXY(numberCircleRadius - numberCircleWidth, numberCircleRadius),
            solidMaterial, Vector3.zero, Quaternion.identity);

        checkDisc = ZoneMeshes.Spawn(labelRoot, "CheckDisc",
            ZoneMeshes.DiscXY(checkSize * 0.5f), solidMaterial,
            new Vector3(checkOffset.x, checkOffset.y, -0.004f), Quaternion.identity);

        checkMark = ZoneMeshes.Spawn(checkDisc.transform, "CheckMark",
            ZoneMeshes.CheckXY(checkSize * 0.62f, checkSize * 0.15f), solidMaterial,
            new Vector3(0f, 0f, -0.003f), Quaternion.identity);

        Tint(circleEdge, outlineColor);
        Tint(checkMark, new Color32(0x0D, 0x1A, 0x12, 0xFF));

        if (labelText != null)
        {
            labelText.enableAutoSizing = true;
            labelText.fontSizeMin = 0.05f;
            labelText.fontSizeMax = 6f;
            labelText.alignment = TextAlignmentOptions.Center;
            labelText.color = Color.white;
        }
    }

    // ---------- 라벨 ----------

    /// <summary>n = 0 이면 글자 모드(displayLabel), 1 이상이면 숫자 모드(흰 링 + 숫자)</summary>
    public void SetNumber(int n)
    {
        Number = n;
        bool num = n > 0;

        if (circle != null) circle.gameObject.SetActive(num);
        if (circleEdge != null) circleEdge.gameObject.SetActive(num);

        if (labelText != null)
        {
            labelText.text = num ? n.ToString() : displayLabel;
            float box = num ? numberBox : letterBox;
            var rt = labelText.rectTransform;
            rt.sizeDelta = new Vector2(box, box);
            rt.anchoredPosition = Vector2.zero;
        }
    }

    public void SetLabel(string text)
    {
        displayLabel = text;
        if (Number == 0) SetNumber(0);
    }

    // ---------- 상태 ----------

    public void SetStatus(ZoneStatus s)
    {
        if (statusApplied && Status == s) return;   // 매 프레임 같은 색을 다시 칠하지 않는다
        Status = s;
        statusApplied = true;

        Color c = s == ZoneStatus.Cue ? cueColor : s == ZoneStatus.Success ? successColor : idleColor;

        Tint(shell, c, s == ZoneStatus.Idle ? idleAlpha : activeAlpha);
        Tint(floorRing, c);
        Tint(topRing, c);
        Tint(circle, Color.white);

        bool ok = s == ZoneStatus.Success;
        if (checkDisc != null) checkDisc.gameObject.SetActive(ok);
        if (ok) Tint(checkDisc, successColor);
    }

    public void SetVisible(bool on)
    {
        if (shell != null) shell.gameObject.SetActive(on);
        if (floorRing != null) floorRing.gameObject.SetActive(on);
        if (topRing != null) topRing.gameObject.SetActive(on);
        if (labelRoot != null) labelRoot.gameObject.SetActive(on);
    }

    private static void Tint(Renderer r, Color c, float alpha = 1f)
    {
        if (r == null) return;
        var m = r.material;
        if (m == null) return;
        c.a = alpha;
        if (m.HasProperty("_BaseColor")) m.SetColor("_BaseColor", c);
        else if (m.HasProperty("_Color")) m.SetColor("_Color", c);
    }

    // 라벨은 Y축으로만 사용자를 향한다 (사방에서 숫자를 읽을 수 있게)
    private void LateUpdate()
    {
        if (labelRoot == null) return;
        var cam = Camera.main;
        if (cam == null) return;

        Vector3 dir = labelRoot.position - cam.transform.position;
        dir.y = 0f;
        if (dir.sqrMagnitude > 0.0001f)
            labelRoot.rotation = Quaternion.LookRotation(dir);
    }
}
