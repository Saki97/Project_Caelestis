using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHealth : MonoBehaviour
{
    public int health;
    public int blinks;
    public float blinkSeconds;
    private Renderer myRender;

    public Text healthText;

    // Start is called before the first frame update
    void Start()
    {
        myRender = GetComponent<Renderer>();
        healthText.text = health.ToString();
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
            Destroy(gameObject);
            //Debug.Log("Player is DEAD!");
        }
        BlinkPlayer(blinks, blinkSeconds);
    }

    void BlinkPlayer(int numBlinks, float seconds)
    {
        StartCoroutine(DoBlinks(numBlinks, seconds));
    }

    IEnumerator DoBlinks(int numBlinks, float seconds)
    {
        for (int i = 0; i < numBlinks*2; i++)
        {
            myRender.enabled = !myRender.enabled;
            yield return new WaitForSeconds(seconds);
        }

        myRender.enabled = true;
    }
}
