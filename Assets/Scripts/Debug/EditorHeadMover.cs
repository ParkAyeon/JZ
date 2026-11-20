using UnityEngine;

/// <summary>
/// 헤드셋 없이 에디터에서 전체 흐름을 테스트하기 위한 이동 장치.
/// OVRCameraRig 가 붙은 오브젝트를 target 에 넣으면 키보드로 걸어 다닐 수 있다.
///
///   W/S·↑↓  앞뒤      A/D  좌우      Q/E·←→  고개 돌리기      Shift  달리기
///
/// 실기에서는 자동으로 아무 동작도 하지 않는다 (에디터 전용).
/// 완성 뒤에는 컴포넌트를 끄거나 삭제한다.
/// </summary>
public class EditorHeadMover : MonoBehaviour
{
    [Tooltip("OVRCameraRig 가 붙은 오브젝트")]
    public Transform target;

    public float walkSpeed = 2.6f;
    public float runSpeed = 5f;
    public float turnSpeed = 110f;

    [Tooltip("XR 이 없을 때 카메라가 바닥에 붙지 않도록 리그를 눈높이로 올린다")]
    public bool simulateEyeHeight = true;
    public float eyeHeight = 1.6f;

    private void Start()
    {
        if (target == null) target = transform;
#if !UNITY_EDITOR
        enabled = false;
#endif
    }

#if UNITY_EDITOR && ENABLE_LEGACY_INPUT_MANAGER
    private void Update()
    {
        if (target == null) return;

        // 헤드셋이 연결돼 있으면 건드리지 않는다
        if (UnityEngine.XR.XRSettings.isDeviceActive) return;

        float turn = (Input.GetKey(KeyCode.E) || Input.GetKey(KeyCode.RightArrow) ? 1f : 0f)
                   - (Input.GetKey(KeyCode.Q) || Input.GetKey(KeyCode.LeftArrow) ? 1f : 0f);
        target.Rotate(0f, turn * turnSpeed * Time.deltaTime, 0f);

        float f = (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow) ? 1f : 0f)
                - (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow) ? 1f : 0f);
        float r = (Input.GetKey(KeyCode.D) ? 1f : 0f) - (Input.GetKey(KeyCode.A) ? 1f : 0f);

        Vector3 dir = target.forward * f + target.right * r;
        dir.y = 0f;
        if (dir.sqrMagnitude > 0.001f)
        {
            float sp = Input.GetKey(KeyCode.LeftShift) ? runSpeed : walkSpeed;
            target.position += dir.normalized * sp * Time.deltaTime;
        }

        if (simulateEyeHeight)
        {
            var p = target.position;
            if (!Mathf.Approximately(p.y, eyeHeight)) { p.y = eyeHeight; target.position = p; }
        }
    }
#endif
}
