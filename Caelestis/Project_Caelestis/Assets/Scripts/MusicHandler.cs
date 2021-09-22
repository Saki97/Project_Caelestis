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
    public string eventID;
    public GameObject frame;

    public float inputTimer;//判定输入误差时间
    public float decayRate;
    // Start is called before the first frame update
    void Start()
    {
        Koreographer.Instance.RegisterForEvents(eventID, Tick);
    }

    // Update is called once per frame
    void Update()
    {
        InputTimerDecay();
    }
    
    void InputTimerDecay()
    {
        inputTimer -= Time.deltaTime * decayRate;
    }

    void Tick(KoreographyEvent evt)
    {
        frame.GetComponent<Image>().color = new Color(1f, 1f, 1f, 0.6f);
        inputTimer = 1f;
        Debug.Log("tick");
    }
}
