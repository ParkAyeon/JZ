using UnityEngine;

/// <summary>
/// 홈 설정. 사용자가 출발할 자리에 서서 훈련 방향을 보고 버튼을 누르면
/// 그 순간의 위치(XZ)와 수평 방향(yaw)을 CourseRoot 에 저장한다. 고개 기울기는 무시한다.
///
/// 고개를 너무 숙이거나 들고 있으면 수평 방향이 불안정해서 거부한다 (프로토타입과 동일, 1.2 rad ≈ 69°).
/// </summary>
public class HomeSetup : MonoBehaviour
{
    public Transform courseRoot;

    [Tooltip("이 각도(도)를 넘게 고개를 숙이거나 들면 거부")]
    public float maxPitchDeg = 68.8f;

    public bool IsSet { get; private set; }
    public string LastRejection { get; private set; }

    /// <summary>성공하면 true. 실패하면 LastRejection 에 사유가 담긴다</summary>
    public bool TrySetHome()
    {
        LastRejection = null;

        var cam = Camera.main;
        if (cam == null)
        {
            LastRejection = "머리 위치를 읽을 수 없어요.";
            return false;
        }

        Vector3 fwd = cam.transform.forward;
        float pitchDeg = Mathf.Asin(Mathf.Clamp(fwd.y, -1f, 1f)) * Mathf.Rad2Deg;

        if (Mathf.Abs(pitchDeg) > maxPitchDeg)
        {
            LastRejection = "수평 방향을 계산할 수 없어요. 정면을 봐 주세요.";
            Debug.Log($"[HomeSetup] 거부: 고개 각도 {pitchDeg:0.0}°");
            return false;
        }

        float yaw = Mathf.Atan2(fwd.x, fwd.z) * Mathf.Rad2Deg;
        Vector3 p = cam.transform.position;
        p.y = 0f;

        courseRoot.SetPositionAndRotation(p, Quaternion.Euler(0f, yaw, 0f));
        IsSet = true;

        Debug.Log($"[HomeSetup] 홈 저장 — 위치 {p}, 방향 {yaw:0.0}°");
        return true;
    }
}
