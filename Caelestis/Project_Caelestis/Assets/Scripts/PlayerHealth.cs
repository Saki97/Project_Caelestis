using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHealth : MonoBehaviour
{
    private Animator anim; // declare animator
    public int health;
    public int blinks;
    public float blinkSeconds;
    public bool isBlinking = false;
    public Text healthText;
    public Text extraLifeLeft;
    private bool haveExtraLife;
    public GameObject failMenu;

    private PucharsedItems purcharsedItems;
    // Start is called before the first frame update
    void Start()
    {
        healthText.text = health.ToString();
        anim = GameObject.Find("Player").GetComponentInChildren<Animator>();
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
            DataRecorder.Instance.DeathCounting();
            StartCoroutine(dead());
            gameObject.SetActive(false);
            failMenu.SetActive(true);

        }
        else
        {
            StartCoroutine(redBlink());
        }
    }


    IEnumerator redBlink()
    {
        anim.SetBool("wounded", true);
        yield return new WaitForSeconds(blinkSeconds);
        anim.SetBool("wounded", false);
    }

    IEnumerator dead()
    {
        anim.SetBool("dead", true);
        yield return new WaitForSeconds(2);
        anim.SetBool("dead", false);
    }

    public void addHealth(){
        if(haveExtraLife){
            int currLifeLeft = purcharsedItems.addLife();
            health ++;
            healthText.text = health.ToString();
            extraLifeLeft.text = currLifeLeft.ToString();
            if(currLifeLeft == 0){
                haveExtraLife = false;
            }
        }       
    }
}
