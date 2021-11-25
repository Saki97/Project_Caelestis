using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BossHealth : MonoBehaviour
{
    private Animator anim; // declare animator
    public int health = 25;
    public Slider healthBar; 
    public float dieTime;
    private Renderer myRender;
    public float blinkSeconds;
    private int numOfCrit;
    private PucharsedItems pucharsedItems;
    public Text critText;

    public GameObject WinFlag;
    // Start is called before the first frame update
    void Start()
    {
        healthBar.maxValue = health;
        numOfCrit = 0;
        pucharsedItems = new PucharsedItems();
        critText.text = pucharsedItems.getNums(2).ToString();
        myRender = GetComponent<Renderer>();
        anim = GameObject.Find("Boss").GetComponentInChildren<Animator>();
        WinFlag.SetActive(false);
    }

    public void critAttack(){
        if(pucharsedItems.useItem(2) >= 0){
            numOfCrit ++;
            critText.text = pucharsedItems.getNums(2).ToString();
        }
    }
    public void GetDamage(int damage)
    {
        if(numOfCrit > 0){
            health -= (int)(damage * 1.2);
            numOfCrit --;
            Debug.Log("Critical Attack: " + (int)(damage * 1.2));
        }else{
            health -= damage;
            Debug.Log("Normal Attack: " + damage);
        }
        
        healthBar.value = health;
        DataRecorder.Instance.DamageCounting(damage);
        if (health <= 0)
        {
            WinFlag.SetActive(true);
            anim.SetTrigger("die");
            DataRecorder.Instance.DeathCounting();
            Invoke("killBoss", dieTime);


        }
        else
        {
            StartCoroutine(redBlink());
        }

    }
    void killBoss()
    {
        Destroy(gameObject);
    }

    IEnumerator redBlink()
    {
        anim.SetBool("wounded",true);
        yield return new WaitForSeconds(blinkSeconds);
        anim.SetBool("wounded", false);
    }
}
