using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using SonicBloom;
using SonicBloom.Koreo;


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
            // 不需要再检查变量是否为null
            return _instance;
        }
    }


    public string eventID;
    public GameObject frame;

    public float inputTimer;//判定输入误差时间
    public float allowance; //允许判定误差
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
        if (Input.GetButtonDown("Jump"))
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
