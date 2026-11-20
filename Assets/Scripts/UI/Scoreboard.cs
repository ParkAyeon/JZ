using TMPro;
using UnityEngine;

/// <summary>
/// 홈에서 10 m 앞, 높이 3.8 m 의 전광판. 머리 고정 HUD 를 대신한다.
/// Canvas 는 World Space, RectTransform 3200 × 1200, Scale 0.00125 → 실제 4 × 1.5 m
/// </summary>
public class Scoreboard : MonoBehaviour
{
    [Header("연결")]
    public TMP_Text text;

    [Header("글자 크기 (Canvas 픽셀)")]
    public float bigSize = 240f;      // 카운트다운 / "시작"
    public float normalSize = 150f;
    public float longSize = 104f;     // 8자 넘는 문구
    public int longThreshold = 8;

    private string last = null;
    private bool lastBig;

    public void Show(string body, bool big = false)
    {
        if (body == last && big == lastBig) return;
        last = body; lastBig = big;

        if (text == null) return;
        text.text = body ?? "";
        text.fontSize = big ? bigSize : (body != null && body.Length > longThreshold ? longSize : normalSize);
    }

    public void SetVisible(bool on)
    {
        if (gameObject.activeSelf != on) gameObject.SetActive(on);
    }
}
