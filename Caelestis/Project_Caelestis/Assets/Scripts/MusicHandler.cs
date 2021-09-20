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

    public float InputTimer;//判定输入误差时间

    // Start is called before the first frame update
    void Start()
    {
        Koreographer.Instance.RegisterForEvents(eventID, Tick);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
    void Tick(KoreographyEvent evt)
    {
        //frame.GetComponent<Image>().color.
        
        Debug.Log("tick");
    }
}
