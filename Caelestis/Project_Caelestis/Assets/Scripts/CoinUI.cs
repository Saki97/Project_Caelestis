using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoinUI : MonoBehaviour
{
    public Text coinQuantity;

    // Start is called before the first frame update
    void Start()
    {
        PlayerPrefs.SetInt("coins", 0);
    }

    // Update is called once per frame
    void Update()
    {
        coinQuantity.text = PlayerPrefs.GetInt("coins").ToString();
    }

}
