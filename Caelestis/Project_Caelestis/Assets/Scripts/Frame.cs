using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
/// <summary>
/// create by Yue Yu
/// </summary>
public class Frame : MonoBehaviour
{

    public float decayRate;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        ColorDecay();
    }

    void ColorDecay()
    {
        Color tmpColor = gameObject.GetComponent<Image>().color;
        tmpColor.a -= decayRate * Time.deltaTime;
        gameObject.GetComponent<Image>().color = tmpColor;
    }
}
