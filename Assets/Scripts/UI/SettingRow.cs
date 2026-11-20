using TMPro;
using UnityEngine;

/// <summary>
/// 안내판의 설정 행 하나. 두 가지 모양을 모두 처리한다.
///   ± 행      : 라벨 · 값 · − · +            (반복 횟수, 거리, 음량)
///   세그먼트 행: 라벨 · 선택지 2개            (모드, 번호 랜덤)
///
/// 프리팹에는 네 버튼을 모두 넣어 두고, 쓰이지 않는 쪽은 스크립트가 숨긴다.
/// </summary>
public class SettingRow : MonoBehaviour
{
    [Header("공통")]
    public TMP_Text labelText;

    [Header("± 행")]
    public GameObject adjustGroup;
    public TMP_Text valueText;
    public WorldButton minusButton;
    public WorldButton plusButton;

    [Header("세그먼트 행")]
    public GameObject segmentGroup;
    public WorldButton segA;
    public WorldButton segB;

    private TrainingSettings.AdjustRow adjust;
    private TrainingSettings.SegmentRow segment;

    public void BindAdjust(TrainingSettings.AdjustRow row)
    {
        adjust = row; segment = null;
        if (adjustGroup != null) adjustGroup.SetActive(true);
        if (segmentGroup != null) segmentGroup.SetActive(false);

        if (labelText != null) labelText.text = row.label;

        if (minusButton != null)
            minusButton.Configure("−", WorldButton.Style.Normal, row.minusEnabled == null || row.minusEnabled(), () => row.minus?.Invoke());
        if (plusButton != null)
            plusButton.Configure("+", WorldButton.Style.Normal, row.plusEnabled == null || row.plusEnabled(), () => row.plus?.Invoke());

        Refresh();
    }

    public void BindSegment(TrainingSettings.SegmentRow row)
    {
        segment = row; adjust = null;
        if (adjustGroup != null) adjustGroup.SetActive(false);
        if (segmentGroup != null) segmentGroup.SetActive(true);

        if (labelText != null) labelText.text = row.label;

        var buttons = new[] { segA, segB };
        for (int i = 0; i < buttons.Length; i++)
        {
            var b = buttons[i];
            if (b == null) continue;
            if (row.options != null && i < row.options.Length)
            {
                int idx = i;
                b.gameObject.SetActive(true);
                b.Configure(row.options[i], WorldButton.Style.Normal, true, () => row.choose?.Invoke(idx));
            }
            else b.gameObject.SetActive(false);
        }

        Refresh();
    }

    /// <summary>설정이 바뀐 뒤 값·활성 상태·선택 표시를 갱신</summary>
    public void Refresh()
    {
        if (adjust != null)
        {
            if (valueText != null && adjust.value != null) valueText.text = adjust.value();
            if (minusButton != null) minusButton.interactable = adjust.minusEnabled == null || adjust.minusEnabled();
            if (plusButton != null) plusButton.interactable = adjust.plusEnabled == null || adjust.plusEnabled();
        }
        else if (segment != null)
        {
            int cur = segment.index != null ? segment.index() : 0;
            if (segA != null) segA.SetOn(cur == 0);
            if (segB != null) segB.SetOn(cur == 1);
        }
    }
}
