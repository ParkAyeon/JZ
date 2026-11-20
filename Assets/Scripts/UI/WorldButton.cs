using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// 손가락 터치 / 핀치 레이로 누르는 버튼.
/// 안내판 버튼(Canvas: Image + TMP)과 월드 버튼(MeshRenderer) 양쪽을 지원한다.
/// 색은 프로토타입과 동일: 보통 #2C3741 · 주요 #2F7FA8 · 켜짐 #5FD4FF · 비활성 #20282F · 가리킴은 흰 테두리
/// </summary>
[DisallowMultipleComponent]
public class WorldButton : MonoBehaviour
{
    public enum Style { Normal, Primary }

    /// <summary>씬에 살아 있는 모든 버튼 (HandPointer 가 훑는다)</summary>
    public static readonly List<WorldButton> All = new List<WorldButton>();

    [Header("연결 (비우면 같은 오브젝트에서 찾음)")]
    public Collider faceCollider;
    public Image image;              // Canvas 버튼
    public Renderer faceRenderer;    // 월드(메시) 버튼
    public TMP_Text label;
    public Outline outline;          // Canvas 가리킴 표시 (없어도 됨)

    [Header("표시")]
    public string text = "버튼";
    public Style style = Style.Normal;
    public bool interactable = true;
    [Tooltip("세그먼트 버튼에서 '선택됨' 상태")]
    public bool isOn = false;

    [Header("색")]
    public Color normalColor = new Color32(0x2C, 0x37, 0x41, 0xFF);
    public Color primaryColor = new Color32(0x2F, 0x7F, 0xA8, 0xFF);
    public Color onColor = new Color32(0x5F, 0xD4, 0xFF, 0xFF);
    public Color disabledColor = new Color32(0x20, 0x28, 0x2F, 0xFF);
    public Color textColor = Color.white;
    public Color onTextColor = new Color32(0x0D, 0x1A, 0x22, 0xFF);
    public Color disabledTextColor = new Color32(0x5D, 0x6A, 0x75, 0xFF);

    [Header("동작")]
    public float pressFlashSec = 0.16f;
    public float cooldownSec = 0.45f;

    public event Action<WorldButton> Pressed;

    private int hoverFrame = -10;
    private float flashUntil, cooldownUntil;
    private Material matInstance;

    public bool IsHovered => hoverFrame >= Time.frameCount - 1;

    private void Awake()
    {
        if (faceCollider == null) faceCollider = GetComponent<Collider>();
        if (image == null) image = GetComponent<Image>();
        if (faceRenderer == null) faceRenderer = GetComponent<Renderer>();
        if (outline == null) outline = GetComponent<Outline>();
        if (label == null) label = GetComponentInChildren<TMP_Text>();

        if (image == null && faceRenderer != null) matInstance = faceRenderer.material;
        Refresh();
    }

    private void OnEnable() { if (!All.Contains(this)) All.Add(this); Refresh(); }
    private void OnDisable() { All.Remove(this); hoverFrame = -10; }

    /// <summary>버튼을 다시 설정한다 (안내판이 페이지를 바꿀 때 호출)</summary>
    public void Configure(string label, Style style, bool interactable, Action onPressed)
    {
        text = label;
        this.style = style;
        this.interactable = interactable;
        isOn = false;
        Pressed = null;
        if (onPressed != null) Pressed += _ => onPressed();
        cooldownUntil = 0f;
        flashUntil = 0f;
        Refresh();
    }

    public void SetOn(bool on) { isOn = on; Refresh(); }

    public void RequestHover() { if (interactable) hoverFrame = Time.frameCount; }

    /// <summary>표면까지의 최단 거리 (콜라이더 안이면 0)</summary>
    public float SurfaceDistance(Vector3 worldPoint)
    {
        if (faceCollider == null || !faceCollider.enabled) return float.MaxValue;
        return Vector3.Distance(worldPoint, faceCollider.ClosestPoint(worldPoint));
    }

    public void Press()
    {
        if (!interactable || Time.time < cooldownUntil) return;
        cooldownUntil = Time.time + cooldownSec;
        flashUntil = Time.time + pressFlashSec;
        Debug.Log($"[Button] '{text}' 눌림");
        Pressed?.Invoke(this);
    }

    private void Update() => Refresh();

    private void Refresh()
    {
        Color bg = !interactable ? disabledColor
                 : Time.time < flashUntil ? onColor
                 : isOn ? onColor
                 : style == Style.Primary ? primaryColor
                 : normalColor;

        Color fg = !interactable ? disabledTextColor
                 : (isOn || Time.time < flashUntil) ? onTextColor
                 : textColor;

        if (image != null) image.color = bg;
        else if (matInstance != null)
        {
            if (matInstance.HasProperty("_BaseColor")) matInstance.SetColor("_BaseColor", bg);
            else if (matInstance.HasProperty("_Color")) matInstance.SetColor("_Color", bg);
        }

        if (label != null)
        {
            if (label.text != text) label.text = text;
            label.color = fg;
            label.fontStyle = (style == Style.Primary || isOn) ? FontStyles.Bold : FontStyles.Normal;
        }

        if (outline != null)
        {
            outline.enabled = IsHovered && interactable;
            outline.effectColor = Color.white;
            outline.effectDistance = new Vector2(6f, 6f);
        }
    }
}
