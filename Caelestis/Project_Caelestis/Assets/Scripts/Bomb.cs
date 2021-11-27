using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem;

public class Bomb : MonoBehaviour
{
    public ParticleSystem bomb;

    private bool hasBomb;
    public Text bombNum;
    private PucharsedItems purchasedItems;
    public BoxCollider2D col;

    void Start()
    {
        purchasedItems = new PucharsedItems();
        bombNum.text = purchasedItems.getNums(1).ToString();
        hasBomb = purchasedItems.getNums(1) > 0;
    }

    private void Update() {
        if(Keyboard.current.Keypad2.wasPressedThisFrame){
            triggerBomb();
        }
    }
    public void triggerBomb(){
        if(hasBomb){
            hasBomb = purchasedItems.useItem(1) > 0;
            bombNum.text = purchasedItems.getNums(1).ToString();
            Debug.Log("Bomb working...");
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
