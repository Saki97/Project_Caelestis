using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;

public class Bomb : MonoBehaviour
{
    public ParticleSystem bomb;

    private bool hasBomb;
    public Text bombNum;
    private PucharsedItems purchasedItems;
    public BoxCollider2D col;
    private bool isLevel0;
    private int level0Bomb;
    void Start()
    {
        purchasedItems = new PucharsedItems();
        isLevel0 = SceneManager.GetActiveScene().name == "level0";
        if(isLevel0 && purchasedItems.getNums(1) == 0){
            level0Bomb = 5;
            bombNum.text = level0Bomb.ToString();
        }else{
            level0Bomb = 0;
            bombNum.text = purchasedItems.getNums(1).ToString();
            hasBomb = purchasedItems.getNums(1) > 0;
        }  
    }

    private void Update() {
        if(Keyboard.current.digit2Key.wasPressedThisFrame){
            triggerBomb();
        }
    }
    public void triggerBomb(){
        if(hasBomb){
            hasBomb = purchasedItems.useItem(1) > 0;
            bombNum.text = purchasedItems.getNums(1).ToString();
            bomb.Play();
            StartCoroutine(startBomb());
        }else if(isLevel0 && level0Bomb > 0){
            level0Bomb--;
            bombNum.text = level0Bomb.ToString();
            bomb.Play();
            StartCoroutine(startBomb());
        }
    }

    IEnumerator startBomb(){    
        col.enabled = true;
        yield return new WaitForSeconds(0.2f);
        col.enabled = false;
    }


}
