using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Unity 기본 도형에 없는 모양을 코드로 만든다.
/// 프로토타입의 THREE.CylinderGeometry(openEnded) / RingGeometry 에 대응.
/// 재질이 Render Face = Both 이므로 삼각형 감는 방향은 중요하지 않다.
/// </summary>
public static class ZoneMeshes
{
    /// <summary>뚜껑 없는 원기둥 옆면. 바닥 y=0, 위 y=height</summary>
    public static Mesh OpenCylinder(float radius, float height, int seg = 48)
    {
        var m = new Mesh { name = "OpenCylinder" };
        int n = seg + 1;
        var v = new Vector3[n * 2];
        var nr = new Vector3[v.Length];
        var uv = new Vector2[v.Length];

        for (int i = 0; i < n; i++)
        {
            float a = (float)i / seg * Mathf.PI * 2f;
            float cx = Mathf.Cos(a), cz = Mathf.Sin(a);
            v[i] = new Vector3(cx * radius, 0f, cz * radius);
            v[i + n] = new Vector3(cx * radius, height, cz * radius);
            nr[i] = nr[i + n] = new Vector3(cx, 0f, cz);
            uv[i] = new Vector2((float)i / seg, 0f);
            uv[i + n] = new Vector2((float)i / seg, 1f);
        }

        var t = new List<int>(seg * 6);
        for (int i = 0; i < seg; i++)
        {
            int a = i, b = i + 1, c = i + n, d = i + n + 1;
            t.Add(a); t.Add(c); t.Add(b);
            t.Add(b); t.Add(c); t.Add(d);
        }

        m.vertices = v; m.normals = nr; m.uv = uv; m.triangles = t.ToArray();
        m.RecalculateBounds();
        return m;
    }

    /// <summary>XY 평면의 도넛(링). +Z 를 바라본다. 바닥 링은 Transform 을 X +90 회전해서 쓴다.</summary>
    public static Mesh AnnulusXY(float inner, float outer, int seg = 64)
    {
        var m = new Mesh { name = "Annulus" };
        int n = seg + 1;
        var v = new Vector3[n * 2];
        var nr = new Vector3[v.Length];
        var uv = new Vector2[v.Length];

        for (int i = 0; i < n; i++)
        {
            float a = (float)i / seg * Mathf.PI * 2f;
            float cx = Mathf.Cos(a), cy = Mathf.Sin(a);
            v[i] = new Vector3(cx * inner, cy * inner, 0f);
            v[i + n] = new Vector3(cx * outer, cy * outer, 0f);
            nr[i] = nr[i + n] = Vector3.forward;
            uv[i] = new Vector2((float)i / seg, 0f);
            uv[i + n] = new Vector2((float)i / seg, 1f);
        }

        var t = new List<int>(seg * 6);
        for (int i = 0; i < seg; i++)
        {
            int a = i, b = i + 1, c = i + n, d = i + n + 1;
            t.Add(a); t.Add(c); t.Add(b);
            t.Add(b); t.Add(c); t.Add(d);
        }

        m.vertices = v; m.normals = nr; m.uv = uv; m.triangles = t.ToArray();
        m.RecalculateBounds();
        return m;
    }

    /// <summary>XY 평면의 채운 원판. +Z 를 바라본다.</summary>
    public static Mesh DiscXY(float radius, int seg = 48)
    {
        var m = new Mesh { name = "Disc" };
        var v = new Vector3[seg + 2];
        var nr = new Vector3[v.Length];
        var uv = new Vector2[v.Length];

        v[0] = Vector3.zero; nr[0] = Vector3.forward; uv[0] = new Vector2(.5f, .5f);
        for (int i = 0; i <= seg; i++)
        {
            float a = (float)i / seg * Mathf.PI * 2f;
            float cx = Mathf.Cos(a), cy = Mathf.Sin(a);
            v[i + 1] = new Vector3(cx * radius, cy * radius, 0f);
            nr[i + 1] = Vector3.forward;
            uv[i + 1] = new Vector2(cx * .5f + .5f, cy * .5f + .5f);
        }

        var t = new List<int>(seg * 3);
        for (int i = 0; i < seg; i++) { t.Add(0); t.Add(i + 1); t.Add(i + 2); }

        m.vertices = v; m.normals = nr; m.uv = uv; m.triangles = t.ToArray();
        m.RecalculateBounds();
        return m;
    }

    /// <summary>XY 평면의 체크 표시 (두 줄기). size 는 전체 가로폭 기준</summary>
    public static Mesh CheckXY(float size, float thickness)
    {
        var p0 = new Vector2(-0.45f, 0.02f) * size;
        var p1 = new Vector2(-0.12f, -0.33f) * size;
        var p2 = new Vector2(0.46f, 0.34f) * size;

        var v = new List<Vector3>(8);
        var t = new List<int>(12);
        AddSegment(v, t, p0, p1, thickness);
        AddSegment(v, t, p1, p2, thickness);

        var m = new Mesh { name = "Check" };
        m.SetVertices(v);
        m.SetTriangles(t, 0);
        var nr = new Vector3[v.Count];
        for (int i = 0; i < nr.Length; i++) nr[i] = Vector3.forward;
        m.normals = nr;
        m.RecalculateBounds();
        return m;
    }

    private static void AddSegment(List<Vector3> v, List<int> t, Vector2 a, Vector2 b, float w)
    {
        Vector2 dir = (b - a).normalized;
        Vector2 side = new Vector2(-dir.y, dir.x) * (w * 0.5f);
        // 끝을 살짝 늘려 꺾이는 지점이 벌어지지 않게
        a -= dir * (w * 0.25f);
        b += dir * (w * 0.25f);

        int i0 = v.Count;
        v.Add(new Vector3(a.x + side.x, a.y + side.y, 0f));
        v.Add(new Vector3(a.x - side.x, a.y - side.y, 0f));
        v.Add(new Vector3(b.x + side.x, b.y + side.y, 0f));
        v.Add(new Vector3(b.x - side.x, b.y - side.y, 0f));

        t.Add(i0); t.Add(i0 + 2); t.Add(i0 + 1);
        t.Add(i0 + 1); t.Add(i0 + 2); t.Add(i0 + 3);
    }

    /// <summary>주어진 부모 아래에 메시 오브젝트 하나를 만든다</summary>
    public static MeshRenderer Spawn(Transform parent, string name, Mesh mesh, Material source,
                                     Vector3 localPos, Quaternion localRot)
    {
        var go = new GameObject(name);
        go.transform.SetParent(parent, false);
        go.transform.localPosition = localPos;
        go.transform.localRotation = localRot;

        go.AddComponent<MeshFilter>().sharedMesh = mesh;
        var r = go.AddComponent<MeshRenderer>();
        r.sharedMaterial = source;
        r.material = source != null ? new Material(source) : null;   // 인스턴스화: 오브젝트마다 독립된 색
        r.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
        r.receiveShadows = false;
        return r;
    }
}
