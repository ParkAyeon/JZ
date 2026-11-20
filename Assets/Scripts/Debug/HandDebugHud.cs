using System.Text;
using TMPro;
using UnityEngine;

/// <summary>
/// 손 입력이 안 먹을 때만 임시로 켜는 진단 표시. 전광판 글자를 잠시 빌려 쓴다.
/// 문제를 잡으면 컴포넌트를 끄거나 삭제한다.
///
///   hand  : OVRHand 가 연결됐는지   (N → HandPointer 를 엉뚱한 오브젝트에 붙임)
///   trk   : 손이 추적되는지         (N → 기기 핸드트래킹 꺼짐 / 컨트롤러 들고 있음 / 손이 시야 밖)
///   tip   : 검지 끝 뼈를 찾았는지   (N → 직접 터치 불가, 핀치만)
///   ptr   : 레이 원점이 유효한지
///   pinch : 핀치 세기 0~1          (붙여도 임계값을 못 넘으면 pinchThreshold 를 낮춤)
///   poke  : 가장 가까운 버튼 표면까지 거리(m)
///   hover : 지금 가리키는 버튼      (-- 면 아무것도 못 맞히는 중)
///   BTN   : 등록된 버튼 수          (0 이면 버튼이 꺼져 있음)
/// </summary>
public class HandDebugHud : MonoBehaviour
{
    public TMP_Text target;
    public bool show = true;
    public float fontSize = 54f;

    private readonly StringBuilder sb = new StringBuilder(320);

    private void Update()
    {
        if (target == null || !show) return;

        sb.Clear();
        sb.Append("BTN ").Append(WorldButton.All.Count)
          .Append("   PTR ").Append(HandPointer.All.Count).Append('\n');

        for (int i = 0; i < HandPointer.All.Count; i++)
        {
            var p = HandPointer.All[i];
            if (p == null) continue;

            sb.Append(p.side == HandPointer.Side.Right ? "R " : "L ")
              .Append("hand:").Append(p.HasHandComponent ? "Y" : "N")
              .Append(" trk:").Append(p.HandTracked ? "Y" : "N")
              .Append(" tip:").Append(p.TipFound ? "Y" : "N")
              .Append(" ptr:").Append(p.PointerValid ? "Y" : "N").Append('\n');

            sb.Append("  pinch:").Append(p.PinchStrength < 0f ? "--" : p.PinchStrength.ToString("0.00"));
            if (p.PinchHeld) sb.Append('*');
            sb.Append("  poke:").Append(p.NearestPokeDistance < 0f ? "--" : p.NearestPokeDistance.ToString("0.000"));
            sb.Append("  ").Append(string.IsNullOrEmpty(p.HoveredName) ? "--" : p.HoveredName).Append('\n');
        }

        target.fontSize = fontSize;
        target.text = sb.ToString();
    }
}
