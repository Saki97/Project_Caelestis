using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BombCollider : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D other) {
        if(other.gameObject.CompareTag("enemy")){
            if(PlayerPrefs.HasKey("coins")){
                PlayerPrefs.SetInt("coins", PlayerPrefs.GetInt("coins") + 2);
            }else{
                PlayerPrefs.SetInt("coins", 2);
            } 
            Destroy(other.gameObject);
        }
    }
}
