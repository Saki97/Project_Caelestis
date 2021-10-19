using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{

    private PlayerControlsNewVersion controls;
    [SerializeField] public float hSpeed; // horizontal movement speed
    [SerializeField] public float vForce; // vertical jump force
    [SerializeField] public float dashDown;
    [SerializeField] public float superJumpMultiple;

    private Rigidbody2D rb;  // declare rigid body
    private BoxCollider2D coll; // declare box-collider
    private SpriteRenderer srr;
    private int lastkey;
    private float dashStart = 0f;
    public Transform groundCheck; // ground-checking point
    public LayerMask Platform; // the Layermask of platforms and ground
    public LayerMask Player; // the Layermask of Player
    public LayerMask Ground;
    public LayerMask Lava;
    public Animator anim; // declare animator
    public ParticleSystem ps;
    public float dashCD;
    public float lastMove;

    public bool isGrounded; // shows 1 when player is grounded
    public bool isJumping; // shows 1 when player is jumping
    public bool isDashing;

    bool superJump; // true when JUMP button is pressed
    bool normalJump; // true when JUMP and V are pressed
    int jumpTimes; // times left that the player can jump
    //int playerLayer, platformLayer;

    private void Awake()
    {
        controls = new PlayerControlsNewVersion();
        rb = GetComponent<Rigidbody2D>(); // get rigid body of the player
        lastMove = 1;
    }

    private void OnEnable()
    {
        controls.Enable();
    }
    private void OnDisable()
    {
        controls.Disable();
    }

    // Start is called before the first frame update
    void Start()
    {
        coll = GetComponent<BoxCollider2D>();
        srr = GetComponent<SpriteRenderer>();// get box-collider of the player
        //playerLayer = LayerMask.NameToLayer("Player");
        //platformLayer = LayerMask.NameToLayer("Platform");
    }

    // Update is called once per frame
    void Update()
    {
        if (!isDashing)
        {
            JumpCheck();
        }

        dashCheck();
    }

    void FixedUpdate()
    {
        
        if (!isDashing)
        {
            isGrounded = GroundedCheck();

            HorizontalMovement();

            Jump();
        }
    }

    // //modified by 李道源
    // void OnTriggerEnter2D(Collider2D col)
    // {

    //     if (col.gameObject.tag == "lava")
    //     {
    //         Debug.Log("collide lava");
    //         Destroy(gameObject);
    //     }

    // }

    void HorizontalMovement()
    {
        //float horizontalMove = Input.GetAxisRaw("Horizontal"); // get the horizontal axis value of the player: leftwards: -1 rightwards: 1 still: 0
        float horizontalMove = controls.Player.Horizontal.ReadValue<float>();
        if (horizontalMove > 0)
        {
            lastMove = horizontalMove;
        }
        else if(horizontalMove < 0)
        {
            lastMove = horizontalMove;
        }
        rb.velocity = new Vector2(horizontalMove * hSpeed, rb.velocity.y); // player moves with a steady velocity

        if (horizontalMove != 0)
        {
            transform.localScale = new Vector3(horizontalMove, 1, 1); // player can change its direction when moving
        }
    }
    void JumpCheck()
    {
        var gamepad = Gamepad.current;
        var keyboard = Keyboard.current;
        bool getJumpDown;
        if (gamepad != null || keyboard != null)
        {
            if (gamepad == null)
            {
                getJumpDown = keyboard.upArrowKey.wasPressedThisFrame || keyboard.wKey.wasPressedThisFrame;
            }
            else
            {
                getJumpDown = gamepad.dpad.up.wasPressedThisFrame || keyboard.upArrowKey.wasPressedThisFrame || keyboard.wKey.wasPressedThisFrame;
            }
        }
        else
        {
            Debug.Log("Cannot find gamepad or keyboard");
            return;
        }

        // When the JUMP button is pressed,
        // the times the player can jump is larger than 0 and if v is pressed either,
        // superJump will be true
        // if not, normal Jump will be true
        //if (Input.GetButtonDown("Jump") && jumpTimes > 0)
        if (getJumpDown && jumpTimes > 0)
        {
            //    if (Input.GetKey(KeyCode.V))
            if (MusicHandler._instance.CheckInputTiming())
            {
                superJump = true;
                spark();
                Debug.Log("Onbeat!");
            }
            else
            {
                normalJump = true;
            }
        }
    }
    void Jump()
    {
        if (isGrounded)
        {
            jumpTimes = 2; // when the player is grounded, resume its jumpTimes
            isJumping = false;
        }

        if (normalJump && isGrounded)
        {
            isJumping = true;
            rb.velocity = new Vector2(rb.velocity.x, vForce); // player jumps when player is grounded and JUMP button is pressed;
            jumpTimes--;
            normalJump = false;
        }
        else if (normalJump && jumpTimes > 0 && isJumping)
        {
            rb.velocity = new Vector2(rb.velocity.x, vForce); // player jumps again if JUMP button is pressed,
            jumpTimes--;                                      // and the jumpTimes is larger than 0
            normalJump = false;
        }
        else if (superJump && isGrounded)
        {
            isJumping = true;
            rb.velocity = new Vector2(rb.velocity.x, (superJumpMultiple * vForce)); // player jumps when player is grounded and JUMP button is pressed;
            jumpTimes = 0;
            superJump = false;
        }
        else if (superJump && jumpTimes > 0 && isJumping)
        {
            rb.velocity = new Vector2(rb.velocity.x, (superJumpMultiple * vForce)); // player jumps again if JUMP button is pressed,
            jumpTimes--;                                      // and the jumpTimes is larger than 0
            superJump = false;
        }
    }

    /*void Attack()
    {
        if (Input.GetButtonDown("Attack"))
        {
            anim.SetTrigger("attack"); // trigger attack animation
        }
    }*/

    bool GroundedCheck() // set up the gounding check point of the player
    {
        return Physics2D.OverlapCircle(groundCheck.position, 0.2f, Platform) || 
            Physics2D.OverlapCircle(groundCheck.position, 0.1f, Ground) ||
            Physics2D.OverlapCircle(groundCheck.position, 0.1f, Lava);
    }

    /*void CrossPlatform()
    {
        if (isGrounded && Input.GetKey(KeyCode.V))
        {
            if (Input.GetKeyDown(KeyCode.DownArrow))
            {
                StartCoroutine(Cross());

            }
        }
    }

    IEnumerator Cross()
    {
        Physics2D.IgnoreLayerCollision(playerLayer, platformLayer, true);
        yield return new WaitForSeconds(0.2f);
        Physics2D.IgnoreLayerCollision(playerLayer, platformLayer, false);
    }*/

    void dashCheck()
    {
        var gamepad = Gamepad.current;
        var keyboard = Keyboard.current;
        bool getDownDown, getLeftDown, getRightDown, DashingDown;

        if (gamepad != null || keyboard != null)
        {
            if (gamepad == null)
            {
                getDownDown = keyboard.downArrowKey.wasPressedThisFrame || keyboard.sKey.wasPressedThisFrame;
                getLeftDown = keyboard.leftArrowKey.wasPressedThisFrame || keyboard.aKey.wasPressedThisFrame;
                getRightDown = keyboard.rightArrowKey.wasPressedThisFrame || keyboard.dKey.wasPressedThisFrame;
                DashingDown = keyboard.zKey.wasPressedThisFrame;
            }
            else
            {
                getDownDown = gamepad.dpad.down.wasPressedThisFrame || keyboard.downArrowKey.wasPressedThisFrame || keyboard.sKey.wasPressedThisFrame;
                getLeftDown = gamepad.dpad.left.wasPressedThisFrame || keyboard.leftArrowKey.wasPressedThisFrame || keyboard.aKey.wasPressedThisFrame;
                getRightDown = gamepad.dpad.right.wasPressedThisFrame || keyboard.rightArrowKey.wasPressedThisFrame || keyboard.dKey.wasPressedThisFrame;
                DashingDown = gamepad.leftTrigger.wasPressedThisFrame || keyboard.zKey.wasPressedThisFrame;
            }

        }
        else
        {
            Debug.Log("Cannot find gamepad or keyboard");
            return;
        }
        if (getDownDown && !isDashing)
        {
            if (MusicHandler._instance.CheckInputTiming())
            {
                StartCoroutine(Dashing("Down"));
                Debug.Log("Onbeat!");
                Debug.Log("Dashing Down");
            }
        }
        else if (DashingDown && !isDashing && lastMove < 0)
        {
            if (MusicHandler._instance.CheckInputTiming())
            {
                StartCoroutine(Dashing("Left"));
                Debug.Log("Onbeat!");
                Debug.Log("Dashing Left");
            }
        }
        else if (DashingDown && !isDashing && lastMove > 0)
         {
             if (MusicHandler._instance.CheckInputTiming())
             {
                 StartCoroutine(Dashing("Right"));
                 Debug.Log("Onbeat!");
                 Debug.Log("Dashing Right");
             }
        }
    }

    IEnumerator Dashing(string direction)
    {
        float gravity = rb.gravityScale;
        float dashingSpeed = hSpeed;
        isDashing = true;
        if (direction == "Down")
        {
            rb.velocity = Vector2.down * dashDown;
            rb.gravityScale = 0;
            srr.enabled = false;
            spark();
            yield return new WaitForSeconds(0.15f);
        }
        else if (direction == "Left")
        {
            hSpeed = 7 * hSpeed;
            rb.gravityScale = 0;
            rb.velocity = new Vector2(-1*hSpeed, rb.velocity.y);
            srr.enabled = false;
            spark();
            yield return new WaitForSeconds(0.15f);
        }
        else if (direction == "Right")
        {
            hSpeed = 7 * hSpeed;
            rb.gravityScale = 0;
            rb.velocity = new Vector2(1*hSpeed, rb.velocity.y);
            srr.enabled = false;
            spark();
            yield return new WaitForSeconds(0.15f);
        }
        isDashing = false;
        hSpeed = dashingSpeed;
        rb.gravityScale = gravity;
        srr.enabled = true;
    }

    void spark()
    {
        ps.Play();
    }
}