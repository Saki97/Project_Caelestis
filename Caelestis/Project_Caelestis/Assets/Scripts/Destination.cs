using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
public class Destination : MonoBehaviour
{
    SpriteRenderer sprite;
    public Sprite newImage;
    public GameObject winMenu;
    public static Action OnLevelClear;

    public Text winmsg;
    
    void Start()
    {
        sprite = GetComponent<SpriteRenderer>();
    }

    void setText(){
        int coins = PlayerPrefs.GetInt("coins") * 5;
        int tot;
        if(PlayerPrefs.HasKey("tot_coins")){
            tot = coins + PlayerPrefs.GetInt("tot_coins");
            PlayerPrefs.SetInt("tot_coins", tot);
        }else{
            tot = 100 + coins;
            PlayerPrefs.SetInt("tot_coins", tot);
        }
        string msg = "You got " + coins + " coins! Now you have " + tot + " coins in total!";
        
        winmsg.text = msg;
    }
    private void OnTriggerEnter2D(Collider2D other) {
        if(other.CompareTag("Player")){
            //Debug.Log("I win !!!");
            sprite.sprite = newImage;
            Time.timeScale = 0;
            setText();
            winMenu.SetActive(true);
            OnLevelClear?.Invoke();
        }
    }
}
