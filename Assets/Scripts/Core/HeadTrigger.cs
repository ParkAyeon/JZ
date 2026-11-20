using System;
using UnityEngine;

/// <summary>
/// 영역 판정 전용. 이 오브젝트 위치(XZ)와 HMD 위치(XZ)의 수평 거리로 진입/이탈을 판단한다.
/// 물리 충돌이 아니라 거리 계산이므로 Rigidbody / Collider 가 필요 없다.
///
/// 프로토타입은 반경 0.5 단일 판정이지만, 실제 추적은 떨리므로 이탈 반경을 조금 크게 둔다(히스테리시스).
/// </summary>
public class HeadTrigger : MonoBehaviour
{
    [Tooltip("비우면 Camera.main 을 쓴다 (CenterEyeAnchor)")]
    public Transform head;

    [Header("판정")]
    public float enterRadius = 0.5f;
    [Tooltip("이탈은 enterRadius + exitMargin 밖으로 나가야 인정")]
    public float exitMargin = 0.2f;

    public bool IsInside { get; private set; }
    public float LastDistance { get; private set; }

    public event Action<HeadTrigger> Entered;
    public event Action<HeadTrigger> Exited;

    private Transform Head
    {
        get
        {
            if (head == null && Camera.main != null) head = Camera.main.transform;
            return head;
        }
    }

    private void Update()
    {
        var h = Head;
        if (h == null) return;

        Vector3 d = h.position - transform.position;
        d.y = 0f;
        float dist = d.magnitude;
        LastDistance = dist;

        if (!IsInside && dist <= enterRadius)
        {
            IsInside = true;
            Entered?.Invoke(this);
        }
        else if (IsInside && dist >= enterRadius + exitMargin)
        {
            IsInside = false;
            Exited?.Invoke(this);
        }
    }

    /// <summary>위치를 옮긴 직후 등, 상태를 지우고 다시 판정하게 한다</summary>
    public void ResetState() => IsInside = false;

    private void OnDrawGizmos()
    {
        Gizmos.color = IsInside ? Color.green : Color.white;
        var c = transform.position;
        for (int i = 0; i < 40; i++)
        {
            float a0 = i / 40f * Mathf.PI * 2f, a1 = (i + 1) / 40f * Mathf.PI * 2f;
            Gizmos.DrawLine(c + new Vector3(Mathf.Cos(a0), 0, Mathf.Sin(a0)) * enterRadius,
                            c + new Vector3(Mathf.Cos(a1), 0, Mathf.Sin(a1)) * enterRadius);
        }
    }
}
