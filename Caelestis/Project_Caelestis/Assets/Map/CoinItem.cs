using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinItem : MonoBehaviour
{
            
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        //other.GetType().ToString() == "UnityEngine.CapsuleCollider2D"
        if (other.gameObject.CompareTag("Player")
        && other.GetType().ToString() == "UnityEngine.CapsuleCollider2D")
        {
            //Coins 
            if(!PlayerPrefs.HasKey("coins")){
                PlayerPrefs.SetInt("coins", 1);
            }else{
                PlayerPrefs.SetInt("coins", PlayerPrefs.GetInt("coins")+1);
            }
            DataRecorder.Instance.CoinCounting();
            Destroy(gameObject);
        }
        // && other.GetType().ToString() == "")
    }
}
