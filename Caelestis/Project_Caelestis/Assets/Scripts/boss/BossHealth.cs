using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossHealth : MonoBehaviour
{
    private Animator anim; // declare animator
    public int health;
    public float dieTime;
    private Renderer myRender;
    public float blinkSeconds;
    // Start is called before the first frame update
    void Start()
    {
        myRender = GetComponent<Renderer>();
        anim = GameObject.Find("Boss").GetComponentInChildren<Animator>();
    }

    public void GetDamage(int damage)
    {
        health -= damage;
        DataRecorder.Instance.DamageCounting(damage);
        if (health <= 0)
        {
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
        anim.SetBool("wounded", true);
        anim.SetBool("idel", false);
        yield return new WaitForSeconds(blinkSeconds);
        anim.SetBool("wounded", false);
        anim.SetBool("idel", true);
    }
}
