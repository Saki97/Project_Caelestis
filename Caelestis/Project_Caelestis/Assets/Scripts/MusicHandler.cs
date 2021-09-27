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


    public string eventID;
    public GameObject frame;

    public float inputTimer;//�ж��������ʱ��
    public float allowance; //�����ж����
    public float decayRate;
    // Start is called before the first frame update
    void Start()
    {
        Koreographer.Instance.RegisterForEvents(eventID, Tick);
        Debug.Log(Koreographer.Instance.GetMusicBPM());
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

        StartCoroutine(OffBeat());
    }

    IEnumerator OffBeat()
    {
        yield return new WaitForSeconds(60 / (float)Koreographer.Instance.GetMusicBPM() / 2);
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
}
