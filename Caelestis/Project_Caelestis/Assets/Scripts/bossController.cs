using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bossController : MonoBehaviour
{
    private PolygonCollider2D col;
    private Animator anim;
    private float player;
    private int actPoint;
    private Rigidbody2D rb;
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
        faceDirection();
    }

    void faceDirection()
    {
        player = GameObject.Find("Player").transform.position.x;
        if (player > transform.position.x)
        {
            transform.localScale = new Vector3(-1, 1, 1);
            Debug.Log("rotate");
        }
        else if(player < transform.position.x)
        {
            transform.localScale = new Vector3(1, 1, 1);
            Debug.Log("rotate");
        }
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

    void BossDash()
    {
        
    }
}
