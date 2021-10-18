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
    
    void Start()
    {
        sprite = GetComponent<SpriteRenderer>();
    }

    void Update()
    {
        
    }

    public void showMenu(){
        winMenu.SetActive(true);
    }
    private void OnTriggerEnter2D(Collider2D other) {
        if(other.CompareTag("Player")){
            //Debug.Log("I win !!!");
            sprite.sprite = newImage;
            showMenu();
            OnLevelClear?.Invoke();
        }
    }
}
