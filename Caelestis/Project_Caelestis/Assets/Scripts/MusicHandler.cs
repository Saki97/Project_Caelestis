using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using SonicBloom;
using SonicBloom.Koreo;
using UnityEngine.InputSystem;

/// <summary>
/// Create by Yue Yu
/// </summary>

public class MusicHandler : MonoBehaviour
{
    public static MusicHandler _instance;
    
    void Awake()
    {
        _instance = this;
    }

    public static MusicHandler Instance
    {
        get
        {
            // ����Ҫ�ټ������Ƿ�Ϊnull
            return _instance;
        }
    }

    public delegate void BeatAction();
    public static event BeatAction OnBeatEvt;
    public static event BeatAction OffBeatEvt;

    public string eventID;
    public GameObject frame;

    public float inputTimer;//used to indicate if on beat
    public float allowance; //�����ж����
    public float decayRate;
    // Start is called before the first frame update

    public AudioClip dashSFX;
    public AudioClip jumpSFX;
    public AudioClip damageSFX;
    public AudioClip attackSFX;
    void Start()
    {
        Koreographer.Instance.RegisterForEvents(eventID, Tick);
        Debug.Log(Koreographer.Instance.GetMusicBPM() + "bmp");
        decayRate =  (float)Koreographer.Instance.GetMusicBPM() / 60f;
    }

    // Update is called once per frame
    void Update()
    {
        InputTimerDecay();

        var gamepad = Gamepad.current;
        var keyboard = Keyboard.current;
        bool getJumpDown;
        if(gamepad != null || keyboard != null){
            if(gamepad == null){
                getJumpDown = keyboard.upArrowKey.wasPressedThisFrame || keyboard.wKey.wasPressedThisFrame;
            }else{
                getJumpDown = gamepad.dpad.up.wasPressedThisFrame || keyboard.upArrowKey.wasPressedThisFrame || keyboard.wKey.wasPressedThisFrame;
            }        
        }else{
            Debug.Log("Cannot find gamepad or keyboard");
            return;
        }

        if (getJumpDown)
        {
            CheckInputTiming();
        }
    }
    
    void InputTimerDecay()
    {
        inputTimer -= Time.deltaTime * decayRate;
    }

    void Tick(KoreographyEvent evt)
    {
        //Debug.Log(inputTimer);
        frame.GetComponent<Image>().color = new Color(1f, 1f, 1f, 0.6f);
        inputTimer = 1f;
        OnBeatEvt?.Invoke();
        StartCoroutine(OffBeat());
    }

    IEnumerator OffBeat()
    {
        yield return new WaitForSeconds(60 / (float)Koreographer.Instance.GetMusicBPM() / 2);
        OffBeatEvt?.Invoke();
        //Debug.Log("OffBeat!");
    }
   

    public bool CheckInputTiming()
    {
        //Debug.Log(Koreographer.Instance.GetMusicBPM());
        if (inputTimer > (1 - allowance) || (inputTimer < allowance))
        {
            //Koreographer.Get

            //Debug.Log("on beat");
            return true;
        }

        else
        {
            return false;
        }
    }

    public void PlayDashSFX()
    {
        if (true)
        {
            AudioSource.PlayClipAtPoint(dashSFX, new Vector3(0, 0, -10),10f);//use Z-axis to modify volume
        }
    }

    public void PlayJumpSFX()
    {
        if (true)
        {
            AudioSource.PlayClipAtPoint(jumpSFX, new Vector3(0, 0, -10),1f);//use Z-axis to modify volume
        }
    }

    public void PlayAttackSFX()
    {
        if (true)
        {
            AudioSource.PlayClipAtPoint(attackSFX, new Vector3(0, 0, -10),1f);//use Z-axis to modify volume
        }
    }

    public void PlayDamageSFX()
    {
        if (true)
        {
            AudioSource.PlayClipAtPoint(damageSFX, new Vector3(0, 0, -10), 1f);//use Z-axis to modify volume
        }
    }
}
