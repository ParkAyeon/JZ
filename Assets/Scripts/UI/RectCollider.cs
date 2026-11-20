using UnityEngine;

/// <summary>
/// RectTransform 크기에 맞춰 BoxCollider 를 자동으로 맞춘다.
/// 안내판 버튼은 Canvas 로 그리고, 손 입력은 물리 레이캐스트로 받기 때문에 둘을 이어 주는 역할.
/// </summary>
[RequireComponent(typeof(BoxCollider))]
public class RectCollider : MonoBehaviour
{
    [Tooltip("콜라이더 두께 (Canvas 로컬 단위). Canvas 스케일 0.00125 기준 24 ≈ 3cm")]
    public float thickness = 24f;

    [Tooltip("가로/세로로 조금 키워 누르기 쉽게")]
    public float padding = 0f;

    private BoxCollider box;
    private RectTransform rt;
    private Vector2 lastSize;

    private void Awake()
    {
        box = GetComponent<BoxCollider>();
        rt = transform as RectTransform;
        Apply();
    }

    private void OnEnable() => Apply();

    private void Update()
    {
        if (rt != null && rt.rect.size != lastSize) Apply();
    }

    public void Apply()
    {
        if (box == null) box = GetComponent<BoxCollider>();
        if (rt == null) rt = transform as RectTransform;
        if (box == null || rt == null) return;

        lastSize = rt.rect.size;
        box.size = new Vector3(lastSize.x + padding, lastSize.y + padding, thickness);
        box.center = new Vector3(rt.rect.center.x, rt.rect.center.y, 0f);
    }
}
