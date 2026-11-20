using System.Collections;
using UnityEngine;

/// <summary>
/// 효과음. 프로토타입과 같은 주파수/길이의 삼각파를 코드로 만들어 쓴다 (에셋 파일 0개).
///
///   카운트다운   440 Hz 0.18초
///   시작         880 Hz 0.30초
///   지시(훈련1)  660 Hz 0.20초
///   통과 성공    880 Hz 0.12초 + 1180 Hz 0.20초
///   홈 복귀      520 Hz 0.14초 + 780 Hz 0.20초
///   훈련 종료    523 · 659 · 784 Hz
///
/// 훈련 2 번호 음성:
///   numberClips[0..3] 에 "일/이/삼/사" 녹음 파일 4개를 모두 끼우면 그것을 쓰고,
///   하나라도 비면 번호만큼 삐 소리를 내는 대체음을 쓴다.
///   녹음 파일은 wav/mp3 아무거나, 1초 미만 권장.
/// </summary>
public class DrillAudio : MonoBehaviour
{
    [Header("번호 음성 (4개 모두 채우면 사용)")]
    [Tooltip("순서대로 1·2·3·4번. 비워두면 대체 비프음")]
    public AudioClip[] numberClips = new AudioClip[4];

    [Header("2D 효과음 재생기 (비우면 자동 생성)")]
    public AudioSource uiSource;

    [Header("음량")]
    [Tooltip("TrainingSettings 를 연결하면 음량 설정을 따라간다")]
    public TrainingSettings settings;
    [Range(0f, 1f)] public float masterVolume = 0.85f;

    [Header("대체 비프음")]
    public float beepBaseFreq = 700f;
    public float beepFreqStep = 120f;
    public float beepLen = 0.09f;
    public float beepGap = 0.07f;

    private AudioClip countClip, startClip, instructClip, successClip, doneClip, endClip;
    private AudioClip[] genNumbers;

    private struct Tone { public float f, d; public Tone(float f, float d) { this.f = f; this.d = d; } }

    private float Vol => masterVolume * (settings != null ? settings.Volume01 : 1f);

    private void Awake()
    {
        if (uiSource == null)
        {
            uiSource = gameObject.AddComponent<AudioSource>();
            uiSource.playOnAwake = false;
            uiSource.spatialBlend = 0f;
        }

        countClip    = Build("count",    new[] { new Tone(440f, 0.18f) }, 0f);
        startClip    = Build("start",    new[] { new Tone(880f, 0.30f) }, 0f);
        instructClip = Build("instruct", new[] { new Tone(660f, 0.20f) }, 0f);
        successClip  = Build("success",  new[] { new Tone(880f, 0.12f), new Tone(1180f, 0.20f) }, 0f);
        doneClip     = Build("done",     new[] { new Tone(520f, 0.14f), new Tone(780f, 0.20f) }, 0f);
        endClip      = Build("end",      new[] { new Tone(523f, 0.16f), new Tone(659f, 0.16f), new Tone(784f, 0.30f) }, 0.02f);

        genNumbers = new AudioClip[4];
        for (int n = 1; n <= 4; n++)
        {
            var tones = new Tone[n];
            for (int i = 0; i < n; i++) tones[i] = new Tone(beepBaseFreq + (n - 1) * beepFreqStep, beepLen);
            genNumbers[n - 1] = Build($"num{n}", tones, beepGap);
        }
    }

    // ---------- 재생 ----------

    public void Count() => Play2D(countClip);
    public void StartCue() => Play2D(startClip);
    public void Instruct() => Play2D(instructClip);
    public void Success() => Play2D(successClip);
    public void Done() => Play2D(doneClip);
    public void End() => Play2D(endClip);

    /// <summary>복귀음 뒤에 종료음을 붙여 재생 (프로토타입은 0.35초 뒤)</summary>
    public void EndAfter(float delay)
    {
        if (!gameObject.activeInHierarchy) { Play2D(endClip); return; }
        StartCoroutine(EndDelayed(delay));
    }

    private IEnumerator EndDelayed(float delay)
    {
        yield return new WaitForSeconds(delay);
        Play2D(endClip);
    }

    /// <summary>번호 신호. spatial 이 있으면 그 위치에서 방향감 있게 재생</summary>
    public void PlayNumber(int n, AudioSource spatial)
    {
        var clip = NumberClip(n);
        if (clip == null) return;

        if (spatial != null)
        {
            spatial.clip = clip;
            spatial.volume = Vol;
            spatial.Play();
        }
        else Play2D(clip);
    }

    public AudioClip NumberClip(int n)
    {
        if (n < 1 || n > 4) return null;
        if (HasAllRecordings()) return numberClips[n - 1];
        return genNumbers != null ? genNumbers[n - 1] : null;
    }

    public bool HasAllRecordings()
    {
        if (numberClips == null || numberClips.Length < 4) return false;
        for (int i = 0; i < 4; i++) if (numberClips[i] == null) return false;
        return true;
    }

    private void Play2D(AudioClip c)
    {
        if (c != null && uiSource != null) uiSource.PlayOneShot(c, Vol);
    }

    // ---------- 클립 생성 ----------

    /// <summary>삼각파 음들을 이어 붙인 모노 클립 (클릭음 방지 엔벨로프 포함)</summary>
    private static AudioClip Build(string name, Tone[] tones, float gap, float amp = 0.5f)
    {
        const int rate = 44100;
        int gapS = Mathf.Max(0, Mathf.RoundToInt(gap * rate));

        int total = 0;
        var lens = new int[tones.Length];
        for (int i = 0; i < tones.Length; i++)
        {
            lens[i] = Mathf.Max(1, Mathf.RoundToInt(tones[i].d * rate));
            total += lens[i];
            if (i < tones.Length - 1) total += gapS;
        }

        var data = new float[total];
        float atk = 0.005f * rate, rel = 0.03f * rate;
        int w = 0;

        for (int i = 0; i < tones.Length; i++)
        {
            int len = lens[i];
            float f = tones[i].f;
            for (int s = 0; s < len; s++)
            {
                float t = s / (float)rate;
                float phase = t * f % 1f;
                float tri = 4f * Mathf.Abs(phase - 0.5f) - 1f;   // 삼각파
                float env = Mathf.Min(1f, s / atk) * Mathf.Min(1f, (len - s) / rel);
                data[w + s] = tri * env * amp;
            }
            w += len;
            if (i < tones.Length - 1) w += gapS;
        }

        var clip = AudioClip.Create(name, total, 1, rate, false);
        clip.SetData(data, 0);
        return clip;
    }
}
