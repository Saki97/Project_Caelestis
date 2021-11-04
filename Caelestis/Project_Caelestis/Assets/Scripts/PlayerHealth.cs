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
    private Renderer myRender;

    public Text healthText;

    // Start is called before the first frame update
    void Start()
    {
        myRender = GetComponent<Renderer>();
        healthText.text = health.ToString();
        anim = GameObject.Find("Player").GetComponentInChildren<Animator>();
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
            //Debug.Log("Player is DEAD!");
        }
        else
        {
            StartCoroutine(redBlink());
        }
        //BlinkPlayer(blinks, blinkSeconds);
    }

    /*void BlinkPlayer(int numBlinks, float seconds)
    {
        StartCoroutine(DoBlinks(numBlinks, seconds));
    }

    IEnumerator DoBlinks(int numBlinks, float seconds)
    {
        if (isBlinking == false) 
            isBlinking = true;
        for (int i = 0; i < numBlinks*2; i++)
        {
            myRender.enabled = !myRender.enabled;
            yield return new WaitForSeconds(seconds);
        }
        isBlinking = false;
        myRender.enabled = true;
    }*/

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
}
