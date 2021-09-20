using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FrameBlinker : MonoBehaviour
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

    public void Blink()
    {
        
    }
    void ColorDecay()
    {
        Color tmpColor = gameObject.GetComponent<Image>().color;
        tmpColor.a -= decayRate * Time.deltaTime;
        this.transform.parent.GetComponent<Image>().color = tmpColor;
    }
}
