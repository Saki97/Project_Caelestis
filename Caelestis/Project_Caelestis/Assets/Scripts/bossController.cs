using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bossController : MonoBehaviour
{
    private PolygonCollider2D col;
    private Animator anim;
    private float player;
    public int actPoint = 0;
    private Rigidbody2D rb;
    private bool faceRight;
    private bool isDashing;
    private float startDashTimer;
    public float dashSpeed;
    public float dashTime;
    public GameObject dashObj;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        col = GetComponent<PolygonCollider2D>();
        rb = GetComponent<Rigidbody2D>();
        actPoint = 0;
    }

    // Update is called once per frame
    void Update()
    {
        faceDirection();
    }

    void FixedUpdate()
    {
        BossAttack();
        BossDash();
    }

    void faceDirection()
    {
        player = GameObject.Find("Player").transform.position.x;
        if (player > transform.position.x && !isDashing)
        {
            transform.localScale = new Vector3(-1, 1, 1);
            faceRight = true;
        }
        else if(player < transform.position.x && !isDashing)
        {
            transform.localScale = new Vector3(1, 1, 1);
            faceRight = false;
        }
    }
    void BossAttack()
    {
        if (MusicHandler._instance.CheckInputTiming() && actPoint <=3 && !isDashing)
        {
            anim.SetTrigger("attack");
            StartCoroutine(startAttack());
            
        }
    }

    IEnumerator startAttack()
    {
        actPoint++;
        col.enabled = true;
        rb.velocity = new Vector2(0, rb.velocity.y);
        //anim.SetTrigger("attack"); // trigger attack animation
        yield return new WaitForSeconds(0.85f);
        col.enabled = false;
    }

    void BossDash()
    {
        if (!isDashing)
        {
            if(MusicHandler._instance.CheckInputTiming() && actPoint == 4)
            {
                isDashing = true;
                startDashTimer = dashTime;
            }
        }
        else
        {
            startDashTimer -= Time.deltaTime;
            if(startDashTimer <= 0)
            {
                isDashing = false;
            }
            else
            {
                if (faceRight == true)
                {
                    rb.velocity = transform.right * dashSpeed;
                }
                else if (faceRight == false)
                {
                    rb.velocity = -1* transform.right * dashSpeed;
                }
                actPoint = 0;
            }
        }
    }
}
