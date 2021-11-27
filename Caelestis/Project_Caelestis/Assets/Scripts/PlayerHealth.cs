using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem;

public class PlayerHealth : MonoBehaviour
{
    private Animator anim; // declare animator
    public int health;
    public bool isBlinking = false;
    public Text healthText;
    public Text extraLifeLeft;
    public bool isDead;
    private bool haveExtraLife;
    public GameObject failMenu;
    public float dieTime;
    private bool isNoDamage;
    private SpriteRenderer playerSR;
    private PlayerController cp;
        

    private PucharsedItems purcharsedItems;
    // Start is called before the first frame update
    void Start()
    {
        healthText.text = health.ToString();
        anim = GetComponentInChildren<Animator>();
        playerSR = GetComponentInChildren<Animator>().GetComponent<SpriteRenderer>();
        purcharsedItems = new PucharsedItems();
        extraLifeLeft.text = purcharsedItems.getNums(0).ToString();
        haveExtraLife = purcharsedItems.getNums(0) > 0;
        cp = GetComponent<PlayerController>();
        isDead = false;
    }

    // Update is called once per frame
    void Update()
    {
        if(Keyboard.current.qKey.wasPressedThisFrame){
            addHealth();
        }
    }

    public void GetDamage(int damage)
    {
 
        if (health <= 0)
        {
            DataRecorder.Instance.DeathCounting();
            dead();
            StartCoroutine(flashRed());
            Invoke("killPlayer", dieTime);
        }
        else if (isNoDamage || cp.isDashing)
        {
            return;
        }
        else
        {
            health -= damage;
            MusicHandler.Instance.PlayDamageSFX();
            healthText.text = health.ToString();
            DataRecorder.Instance.DamageCounting(damage);
            StartCoroutine(flashRed());
            StartCoroutine(noDamage());
        }
    }

    IEnumerator flashRed()
    {
        for (int i = 0; i < 3; i++)
        {
            playerSR.color = Color.red;
            yield return new WaitForSeconds(.08f);
            playerSR.color = Color.white;
            yield return new WaitForSeconds(.08f);
        }
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
        isDead = true;
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
