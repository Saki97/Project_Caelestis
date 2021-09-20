using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    private Rigidbody2D rb;  // declare rigid body
    private Collider2D coll; // declare box-collider
    

    public float hSpeed; // horizontal movement speed
    public float vForce; // vertical jump force
    public Transform groundCheck; // ground-checking point
    public LayerMask platform_test; // the Layermask of platforms and ground
    public Animator anim; // declare animator

    public bool isGrounded; // shows 1 when player is grounded
    public bool isJumping; // shows 1 when player is jumping

    bool jumpPressed; // shows 1 when JUMP button is pressed
    int jumpTimes; // times left that the player can jump


    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>(); // get rigid body of the player
        coll = GetComponent<Collider2D>(); // get box-collider of the player
    }

    // Update is called once per frame
    void Update()
    {
        // When the JUMP button is pressed,
        // and the times the player can jump is larger than 0,
        // jumpPressed will be true
        if(Input.GetButtonDown("Jump") && jumpTimes > 0)
        {
            jumpPressed = true;
        }

        Attack();
    }

    //modified by 李道源
    void OnCollisionEnter2D(Collision2D col)
    {

        if (col.gameObject.tag == "lava")
        {
            Debug.Log("collide lava");
            Destroy(gameObject);
        }
        else if (col.gameObject.tag == "enemy")
        {
            Debug.Log("collide enemy");
            Destroy(gameObject);
        }
    }




    private void FixedUpdate()
    {
        isGrounded = Physics2D.OverlapCircle(groundCheck.position, 0.1f, platform_test); // set up the gounding check point of the player

        HorizontalMovement();

        Jump();

    }

    void HorizontalMovement()
    {
        float horizontalMove = Input.GetAxisRaw("Horizontal"); // get the horizontal axis value of the player: leftwards: -1 rightwards: 1 still: 0
        rb.velocity = new Vector2(horizontalMove * hSpeed, rb.velocity.y); // player moves with a steady velocity

        if(horizontalMove != 0)
        {
            transform.localScale = new Vector3(horizontalMove, 1, 1); // player can change its direction when moving
        }
    }

    void Jump()
    {
        if(isGrounded)
        {
            jumpTimes = 2; // when the player is grounded, resume its jumpTimes
            isJumping = false;
        }

        if(jumpPressed && isGrounded)
        {
            isJumping = true;
            rb.velocity = new Vector2(rb.velocity.x, vForce); // player jumps when player is grounded and JUMP button is pressed;
            jumpTimes--;
            jumpPressed = false;
        }
        else if(jumpPressed && jumpTimes > 0 && isJumping)
        {
            rb.velocity = new Vector2(rb.velocity.x, vForce); // player jumps again if JUMP button is pressed,
            jumpTimes--;                                      // and the jumpTimes is larger than 0
            jumpPressed = false;
        }
    }

    void Attack()
    {
        if (Input.GetButtonDown("Attack")) 
        {
            anim.SetTrigger("attack"); // trigger attack animation
        }
    }
}
