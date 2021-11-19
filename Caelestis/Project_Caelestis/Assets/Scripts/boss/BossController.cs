using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossController : MonoBehaviour
{
    private PolygonCollider2D col;
    private Animator anim;
    private float player;
    public int actPoint = 0;
    private Rigidbody2D rb;
    private bool faceRight;
    private bool isDashing;
    private bool isAttacking;
    private float startDashTimer;
    public float dashSpeed;
    public float dashTime;

    private PlayerController playerController;
    private PlayerHealth playerHealth;
    public int damage;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        col = GetComponent<PolygonCollider2D>();
        rb = GetComponent<Rigidbody2D>();
        actPoint = 0;

        playerHealth = GameObject.Find("Player").GetComponent<PlayerHealth>();
        playerController = GameObject.Find("Player").GetComponent<PlayerController>();
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
        else if (player < transform.position.x && !isDashing)
        {
            transform.localScale = new Vector3(1, 1, 1);
            faceRight = false;
        }
    }
    void BossAttack()
    {
        if (!MusicHandler._instance.CheckInputTiming() && actPoint <= 2 && !isDashing && !isAttacking)
        {
            anim.SetTrigger("attack");
            StartCoroutine(startAttack());
            actPoint++;
        }
    }

    IEnumerator startAttack()
    {
        isAttacking = true;
        col.enabled = true;
        rb.velocity = new Vector2(0, rb.velocity.y);
        //anim.SetTrigger("attack"); // trigger attack animation
        yield return new WaitForSeconds(0.85f);
        col.enabled = false;
        isAttacking = false;
    }

    void BossDash()
    {
        if (!isDashing)
        {
            if (!MusicHandler._instance.CheckInputTiming() && actPoint == 3 && !isAttacking)
            {
                isDashing = true;
                startDashTimer = dashTime;
            }
        }
        else
        {
            startDashTimer -= Time.deltaTime;
            if (startDashTimer <= 0)
            {
                isDashing = false;
            }
            else
            {
                anim.SetTrigger("dash");
                ShadowController.instance.GetFormPool();
                if (faceRight == true)
                {
                    rb.velocity = transform.right * dashSpeed;
                }
                else if (faceRight == false)
                {
                    rb.velocity = -1 * transform.right * dashSpeed;
                    
                }
                actPoint = 0;
            }
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Player") && collision.GetType().ToString() == "UnityEngine.CapsuleCollider2D")
        {
            if (playerHealth != null && !playerController.isDashing)
            {
                playerHealth.GetDamage(damage);
            }
        }
        else if (collision.gameObject.CompareTag("Player") && collision.GetType().ToString() == "UnityEngine.PolygonCollider2D")
        {
            if (playerHealth != null && !playerController.isDashing)
            {
                playerHealth.GetDamage(damage);
            }
        }
    }
}