using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Bomb : MonoBehaviour
{
    public ParticleSystem bomb;

    private bool hasBomb;
    public Text bombNum;
    private PucharsedItems purchasedItems;
   
    void Start()
    {
        purchasedItems = new PucharsedItems();
        bombNum.text = purchasedItems.getNums(1).ToString();
        hasBomb = purchasedItems.getNums(1) > 0;
    }
    public void triggerBomb(){
        if(hasBomb){
            hasBomb = purchasedItems.useItem(1) > 0;
            bombNum.text = purchasedItems.getNums(1).ToString();
            Debug.Log("Bomb working...");
            bomb.Play();
        }
    }



}