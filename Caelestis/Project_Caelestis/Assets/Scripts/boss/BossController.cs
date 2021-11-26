using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossController : MonoBehaviour
{
    private PolygonCollider2D col1;
    private BoxCollider2D col2;
    private CapsuleCollider2D col3;
    private Animator anim;
    private float player;
    public int actPoint = 0;
    private Rigidbody2D rb;
    private bool faceRight;
    public bool isDashing;
    private bool isAttacking;
    private float startDashTimer;
    private float puseTimer = 100f;
    public float dashSpeed;
    public float dashTime;

    private PlayerController playerController;
    private PlayerHealth playerHealth;
    public int damage;


    [SerializeField] private AudioClip atkSFX;
    [SerializeField] private AudioClip dashSFX;
    [SerializeField] private AudioClip damageSFX;
    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        col1 = GetComponent<PolygonCollider2D>();
        col2 = GetComponent<BoxCollider2D>();
        col3 = GetComponent<CapsuleCollider2D>();
        rb = GetComponent<Rigidbody2D>();
        actPoint = 0;
        col3.enabled = false;
        col1.enabled = false;

        playerHealth = GameObject.Find("Player").GetComponent<PlayerHealth>();
        playerController = GameObject.Find("Player").GetComponent<PlayerController>();

        MusicHandler.OnBeatEvt += this.BossAttack;
    }

    // Update is called once per frame
    void Update()
    {
        faceDirection();
        if (isDashing)
        {
            col2.enabled = false;
        }
        else
        {
            col2.enabled = true;
        }
        
    }

    void FixedUpdate()
    {
        //BossAttack();
        BossDash();
    }

    void faceDirection()
    {
        player = GameObject.Find("Player").transform.position.x;
        if (player > transform.position.x && transform.position.x >= 65 && !isDashing)
        {
            transform.localScale = new Vector3(-1, 1, 1);
            faceRight = true;
        }
        else if ((player < transform.position.x && transform.position.x <= 109)  && !isDashing)
        {
            transform.localScale = new Vector3(1, 1, 1);
            faceRight = false;
        }
        else if(transform.position.x < 65)
        {
            transform.localScale = new Vector3(-1, 1, 1);
            faceRight = true;
        }
        else if(transform.position.x > 109)
        {
            transform.localScale = new Vector3(1, 1, 1);
            faceRight = false;
        }
    }
    void BossAttack()
    {
            if ((actPoint == 1 || actPoint == 3 || actPoint == 5) && !isDashing && !isAttacking)
            {
                anim.SetBool("attack",true);
                anim.SetBool("idel", false);
                anim.SetBool("dash", false);
                StartCoroutine(startAttack());
                actPoint++;

            AudioSource.PlayClipAtPoint(atkSFX, Camera.current.transform.position);
            }
            else if(actPoint == 0 || actPoint == 2 || actPoint == 4 || actPoint == 6)
            {
                pause();
                actPoint++;
            }
    }

    void pause()
    {
        puseTimer -= Time.deltaTime;
        if(puseTimer <= 0)
        {
            Debug.Log("Puse");
        }
    }

    IEnumerator startAttack()
    {
        isAttacking = true;
        col1.enabled = true;
        rb.velocity = new Vector2(0, rb.velocity.y);
        yield return new WaitForSeconds(0.85f);
        col1.enabled = false;
        isAttacking = false;
        anim.SetBool("attack", false);
        anim.SetBool("idel", true);
    }

    void BossDash()
    {
        if (!isDashing)
        {
            if (!MusicHandler._instance.CheckInputTiming() && actPoint == 7 && !isAttacking)
            {
                isDashing = true;
                startDashTimer = dashTime;
                AudioSource.PlayClipAtPoint(dashSFX, Camera.current.transform.position);
            }
            anim.SetBool("dash", false);
        }
        else
        {
            startDashTimer -= Time.deltaTime;
            if (startDashTimer <= 0)
            {
                isDashing = false;
                col3.enabled = false;
                rb.velocity = new Vector3(0, 0, 0);
                
            }
            else
            {
                col3.enabled = true;
                anim.SetBool("dash", true);
                anim.SetBool("idel", false);
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
                AudioSource.PlayClipAtPoint(damageSFX, Camera.current.transform.position);
            }
        }
        else if (collision.gameObject.CompareTag("Player") && collision.GetType().ToString() == "UnityEngine.PolygonCollider2D")
        {
            if (playerHealth != null && !playerController.isDashing)
            {
                playerHealth.GetDamage(damage);
                AudioSource.PlayClipAtPoint(damageSFX, Camera.current.transform.position);
            }
        }
    }
}