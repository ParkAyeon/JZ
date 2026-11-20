using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 한 손에 하나씩 붙인다 (OVRHand / OVRSkeleton 이 있는 오브젝트에 그대로 Add Component).
///
///   직접 터치 — 검지 끝이 버튼 표면에 닿으면 누름
///   핀치 레이 — 손에서 나가는 레이가 버튼을 가리킨 상태에서 엄지+검지를 붙이면 누름
///
/// 컨트롤러가 연결돼 있으면 트리거로도 눌린다. 에디터에서는 마우스 클릭으로도 눌린다.
/// </summary>
public class HandPointer : MonoBehaviour
{
    public enum Side { Left, Right }

    public static readonly List<HandPointer> All = new List<HandPointer>();

    [Header("어느 손")]
    public Side side = Side.Right;

    [Header("핸드트래킹 (비우면 같은 오브젝트에서 찾음)")]
    public OVRHand hand;
    public OVRSkeleton skeleton;

    [Header("핀치 레이")]
    public float rayLength = 6f;
    [Range(0.1f, 1f)] public float pinchThreshold = 0.7f;
    [Tooltip("얇고 긴 Cube 를 자식으로 넣으면 레이가 보인다. Collider 는 반드시 삭제")]
    public Transform rayVisual;
    public float rayThickness = 0.006f;

    [Header("직접 터치")]
    public float pokeEnter = 0.02f;
    public float pokeExit = 0.05f;

    [Header("폴백")]
    public bool allowController = true;
    public bool allowEditorMouse = true;

    private Transform indexTip;
    private bool pokeDown, pinchDown;

    // 진단용
    public bool HasHandComponent => hand != null;
    public bool HandTracked => hand != null && hand.IsTracked;
    public bool TipFound => indexTip != null;
    public bool PointerValid { get; private set; }
    public bool PinchHeld { get; private set; }
    public float PinchStrength { get; private set; } = -1f;
    public string HoveredName { get; private set; }
    public float NearestPokeDistance { get; private set; } = -1f;

    private OVRInput.Controller Ctrl => side == Side.Right ? OVRInput.Controller.RTouch : OVRInput.Controller.LTouch;

    private void Awake()
    {
        if (hand == null) hand = GetComponent<OVRHand>();
        if (skeleton == null) skeleton = GetComponent<OVRSkeleton>();
        if (rayVisual != null) rayVisual.gameObject.SetActive(false);
    }

    private void OnEnable() { if (!All.Contains(this)) All.Add(this); }
    private void OnDisable() { All.Remove(this); }

    private void Update()
    {
        HoveredName = null;
        NearestPokeDistance = -1f;
        PinchStrength = hand != null && hand.IsTracked
            ? hand.GetFingerPinchStrength(OVRHand.HandFinger.Index)
            : -1f;

        FindIndexTip();
        DoPoke();
        DoRay();
#if ENABLE_LEGACY_INPUT_MANAGER
        if (allowEditorMouse && Application.isEditor) DoEditorMouse();
#endif
    }

    private void FindIndexTip()
    {
        if (indexTip != null || skeleton == null || !skeleton.IsDataValid) return;
        var bones = skeleton.Bones;
        if (bones == null) return;

        foreach (var b in bones)
        {
            // SDK 버전에 따라 Hand_IndexTip / XRHand_IndexTip 로 이름이 다를 수 있어 접미사로 찾는다
            if (b != null && b.Id.ToString().EndsWith("IndexTip")) { indexTip = b.Transform; break; }
        }
    }

    private void DoPoke()
    {
        if (indexTip == null) { pokeDown = false; return; }

        WorldButton best = null;
        float bestD = float.MaxValue;
        for (int i = 0; i < WorldButton.All.Count; i++)
        {
            var b = WorldButton.All[i];
            if (b == null || !b.interactable) continue;
            float d = b.SurfaceDistance(indexTip.position);
            if (d < bestD) { bestD = d; best = b; }
        }

        if (best != null)
        {
            NearestPokeDistance = bestD;
            if (bestD < pokeExit) { best.RequestHover(); HoveredName = best.text; }
        }

        if (!pokeDown)
        {
            if (best != null && bestD <= pokeEnter) { pokeDown = true; best.Press(); }
        }
        else if (best == null || bestD >= pokeExit) pokeDown = false;
    }

    private void DoRay()
    {
        Transform origin = PointerOrigin();
        PointerValid = origin != null;

        if (origin == null)
        {
            if (rayVisual != null) rayVisual.gameObject.SetActive(false);
            pinchDown = false;
            PinchHeld = false;
            return;
        }

        Vector3 from = origin.position, dir = origin.forward;
        WorldButton btn = null;
        float dist = rayLength;

        if (Physics.Raycast(from, dir, out RaycastHit hit, rayLength))
        {
            btn = hit.collider.GetComponentInParent<WorldButton>();
            if (btn != null) dist = hit.distance;
        }

        if (btn != null && btn.interactable) { btn.RequestHover(); HoveredName = btn.text; }

        DrawRay(from, dir, dist);

        bool pinch = PinchNow();
        PinchHeld = pinch;

        if (pinch && !pinchDown) { pinchDown = true; if (btn != null) btn.Press(); }
        else if (!pinch) pinchDown = false;
    }

    private Transform PointerOrigin()
    {
        if (hand != null && hand.IsTracked && hand.IsPointerPoseValid) return hand.PointerPose;
        if (allowController && OVRInput.IsControllerConnected(Ctrl)) return transform;
        return null;
    }

    private bool PinchNow()
    {
        if (hand != null && hand.IsTracked)
            return hand.GetFingerPinchStrength(OVRHand.HandFinger.Index) >= pinchThreshold;
        if (allowController && OVRInput.IsControllerConnected(Ctrl))
            return OVRInput.Get(OVRInput.Axis1D.PrimaryIndexTrigger, Ctrl) > 0.6f;
        return false;
    }

    private void DrawRay(Vector3 from, Vector3 dir, float len)
    {
        if (rayVisual == null) return;
        if (!rayVisual.gameObject.activeSelf) rayVisual.gameObject.SetActive(true);
        rayVisual.position = from + dir * (len * 0.5f);
        rayVisual.rotation = Quaternion.LookRotation(dir);
        rayVisual.localScale = new Vector3(rayThickness, rayThickness, len);
    }

#if ENABLE_LEGACY_INPUT_MANAGER
    private void DoEditorMouse()
    {
        var cam = Camera.main;
        if (cam == null) return;

        Ray r = cam.ScreenPointToRay(Input.mousePosition);
        if (!Physics.Raycast(r, out RaycastHit hit, 50f)) return;

        var btn = hit.collider.GetComponentInParent<WorldButton>();
        if (btn == null) return;

        btn.RequestHover();
        HoveredName = btn.text;
        if (Input.GetMouseButtonDown(0)) btn.Press();
    }
#endif
}
