using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHealth : MonoBehaviour
{
    private Animator anim; // declare animator
    public int health;
    public float blinkSeconds;
    public bool isBlinking = false;
    public Text healthText;
    public Text extraLifeLeft;
    private bool haveExtraLife;
    public GameObject failMenu;
    public float dieTime;
    private CapsuleCollider2D col;
        

    private PucharsedItems purcharsedItems;
    // Start is called before the first frame update
    void Start()
    {
        healthText.text = health.ToString();
        anim = GameObject.Find("Player").GetComponentInChildren<Animator>();
        col = GameObject.Find("Player").GetComponentInChildren<CapsuleCollider2D>();
        purcharsedItems = new PucharsedItems();
        extraLifeLeft.text = purcharsedItems.getNums(0).ToString();
        haveExtraLife = purcharsedItems.getNums(0) > 0;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void GetDamage(int damage)
    {
        health -= damage;
        healthText.text = health.ToString();
        DataRecorder.Instance.DamageCounting(damage);
        MusicHandler.Instance.PlayDamageSFX();
        if (health <= 0)
        {
            killPlayer();
            DataRecorder.Instance.DeathCounting();
            Invoke("killBoss", dieTime);
            dead();
        }
        else
        {
            StartCoroutine(redBlink());
        }
    }


    IEnumerator redBlink()
    {
        anim.SetBool("wounded", true);
        col.enabled = false;
        yield return new WaitForSeconds(blinkSeconds);
        col.enabled = true;
        anim.SetBool("wounded", false);
    }

    void dead()
    {
        anim.SetTrigger("dead");
    }

    public void addHealth(){
        if(haveExtraLife){
            int currLifeLeft = purcharsedItems.useItem(0);
            health ++;
            healthText.text = health.ToString();
            extraLifeLeft.text = currLifeLeft.ToString();
            if(currLifeLeft == 0){
                haveExtraLife = false;
            }
        }       
    }

    void killPlayer()
    {
        gameObject.SetActive(false);
        failMenu.SetActive(true);
    }
}
