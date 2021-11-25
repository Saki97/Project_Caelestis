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
    private bool isNoDamage;
        

    private PucharsedItems purcharsedItems;
    // Start is called before the first frame update
    void Start()
    {
        healthText.text = health.ToString();
        anim = GameObject.Find("Player").GetComponentInChildren<Animator>();
        col = GameObject.Find("Player").GetComponent<CapsuleCollider2D>();
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
 
        if (health <= 0)
        {
            killPlayer();
            DataRecorder.Instance.DeathCounting();
            Invoke("killBoss", dieTime);
            dead();
        }
        else if (isNoDamage)
        {
            return;
        }
        else
        {
            health -= damage;
            MusicHandler.Instance.PlayDamageSFX();
            healthText.text = health.ToString();
            DataRecorder.Instance.DamageCounting(damage);
            StartCoroutine(redBlink());
            StartCoroutine(noDamage());
        }
    }


    IEnumerator redBlink()
    {
        anim.SetBool("wounded", true);
        yield return new WaitForSeconds(blinkSeconds);
        anim.SetBool("wounded", false);
    }

    IEnumerator noDamage()
    {
        if (!isNoDamage)
        {
            isNoDamage = true;
            yield return new WaitForSeconds(1.0f);
            isNoDamage = false;
        }
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
