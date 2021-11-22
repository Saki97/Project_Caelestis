using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Bomb : MonoBehaviour
{
    public SpriteRenderer bomb;
    private PucharsedItems purchasedItems;
    private bool hasBomb;
    public Text bombNum;
    public CircleCollider2D col;
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
            //add animation ? 
            StartCoroutine(startBomb());
        }
    }

    private void OnTriggerEnter2D(Collider2D other) {
        if(other.gameObject.CompareTag("enemy")){
            Destroy(other.gameObject);
        }
    }

    IEnumerator startBomb(){
        bomb.enabled = true;
        col.enabled = true;
        yield return new WaitForSeconds(0.2f);
        bomb.enabled = false;
        col.enabled = false;
    }

}
