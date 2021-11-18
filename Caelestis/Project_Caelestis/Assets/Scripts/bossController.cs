using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bossController : MonoBehaviour
{
    public PolygonCollider2D col;
    private Animator anim;
    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        col = GetComponent<PolygonCollider2D>();
    }

    // Update is called once per frame
    void Update()
    {
        BossAttack();
    }

    void BossAttack()
    {
        if (!MusicHandler._instance.CheckInputTiming())
        {
            anim.SetTrigger("attack");
            StartCoroutine(startAttack());
        }
    }

    IEnumerator startAttack()
    {
        col.enabled = true;
        //anim.SetTrigger("attack"); // trigger attack animation
        yield return new WaitForSeconds(0.5f);
        col.enabled = false;
    }
}
