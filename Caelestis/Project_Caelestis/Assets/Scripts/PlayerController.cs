using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{

    private PlayerControlsNewVersion controls;
    [SerializeField] public float hSpeed; // horizontal movement speed
    [SerializeField] public float vForce; // vertical jump force
    [SerializeField] public float dashDown; // vertically dash-down speed
    [SerializeField] public float superJumpMultiple; // the multiples of jump force for super jump


    private Rigidbody2D rb;  // declare rigid body
    private BoxCollider2D coll; // declare box-collider
    private SpriteRenderer srr; // sprite renderer of the player
    private float lastMove; // horizontal value of the last movement
    private Animator anim; // declare animator
    
    public Transform groundCheck; // ground-checking point
    public LayerMask Platform; // the Layermask of platforms and ground
    public LayerMask Player; // the Layermask of Player
    public LayerMask Ground; // layer of the ground
    public LayerMask Lava; // layer of the lava
    public ParticleSystem ps; // particle system for player
    public float dashCD; // dash time
    

    public bool isGrounded; // shows 1 when player is grounded
    //public bool isJumping;  // shows 1 when player is jumping
    public bool isDashing; // shows 1 when player is dashing
    public bool isMoving; // shows 1 when player is moving

    public bool superJump; // true when JUMP button is pressed
    public bool normalJump; // true when JUMP and V are pressed
    public bool afterFall;
    int jumpTimes; // times left that the player can jump
    //int playerLayer, platformLayer;

    private void Awake()
    {
        controls = new PlayerControlsNewVersion();
        rb = GetComponent<Rigidbody2D>(); // get rigid body of the player
        lastMove = 1;
        anim = GameObject.Find("Player").GetComponentInChildren<Animator>();
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
        srr = GameObject.Find("Player/PlayerAnimation").GetComponent<SpriteRenderer>();

    }

    // Update is called once per frame
    void Update()
    {
        if (!isDashing)
        {
            JumpCheck();
        }
        if(rb.velocity.y < -1)
        {
            afterFall = true;
        }

        dashCheck();
        switchAnim();

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

    void HorizontalMovement()
    {
        //float horizontalMove = Input.GetAxisRaw("Horizontal"); // get the horizontal axis value of the player: leftwards: -1 rightwards: 1 still: 0
        float horizontalMove = controls.Player.Horizontal.ReadValue<float>();
        anim.SetFloat("walking", Mathf.Abs(horizontalMove));
        if (horizontalMove > 0)
        {
            lastMove = horizontalMove;
            isMoving = true;
        }
        else if(horizontalMove < 0)
        {
            lastMove = horizontalMove;
            isMoving = true;
        }
        else
        {
            isMoving = false;
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

        if (getJumpDown && jumpTimes > 0)
        {

            if (MusicHandler._instance.CheckInputTiming())
            {
                superJump = true;
                spark();
                
                DataRecorder.Instance.OnBeatCounting();
                MusicHandler.Instance.PlayJumpSFX();
            }
            else
            {
                normalJump = true;
                MusicHandler.Instance.PlayJumpSFX();
            }
            DataRecorder.Instance.CommandCounting();
        }
    }
    void Jump()
    {
        if (isGrounded)
        {
            jumpTimes = 2;
        }

        if (normalJump && isGrounded)
        {
            anim.SetBool("jumping",true);
            anim.SetBool("idel", false);
            rb.velocity = new Vector2(rb.velocity.x, vForce); // player jumps when player is grounded and JUMP button is pressed;
            jumpTimes--;
            normalJump = false;
        }
        else if (normalJump && jumpTimes == 1 && !isGrounded)
        {
            anim.SetBool("jumping", true);
            anim.SetBool("idel", false);
            rb.velocity = new Vector2(rb.velocity.x, vForce); // player jumps again if JUMP button is pressed,
            jumpTimes--;                                      // and the jumpTimes is larger than 0
            normalJump = false;
        }
        else if (superJump && isGrounded)
        {
            anim.SetBool("jumping", true);
            anim.SetBool("idel", false);
            rb.velocity = new Vector2(rb.velocity.x, (superJumpMultiple * vForce)); // player jumps when player is grounded and JUMP button is pressed;
            jumpTimes = 0;
            superJump = false;
        }
        else if (superJump && jumpTimes == 1 && !isGrounded)
        {
            anim.SetBool("jumping", true);
            anim.SetBool("idel", false);
            //anim.SetBool("idel", false);
            rb.velocity = new Vector2(rb.velocity.x, (superJumpMultiple * vForce)); // player jumps again if JUMP button is pressed,
            jumpTimes--;                                      // and the jumpTimes is larger than 0
            superJump = false;
        }
    }

    bool GroundedCheck() // set up the gounding check point of the player
    {
        return Physics2D.OverlapCircle(groundCheck.position, 0.65f, Platform) || 
            Physics2D.OverlapCircle(groundCheck.position, 0.4f, Ground) ||
            Physics2D.OverlapCircle(groundCheck.position, 0.4f, Lava);
    }

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
                DataRecorder.Instance.OnBeatCounting();
                DataRecorder.Instance.CommandCounting();
            }
        }
        else if (DashingDown && !isDashing && lastMove < 0)
        {
            if (MusicHandler._instance.CheckInputTiming())
            {
                StartCoroutine(Dashing("Left"));
                DataRecorder.Instance.OnBeatCounting();
                DataRecorder.Instance.CommandCounting();
            }
        }
        else if (DashingDown && !isDashing && lastMove > 0)
         {
             if (MusicHandler._instance.CheckInputTiming())
             {
                 StartCoroutine(Dashing("Right"));
                 DataRecorder.Instance.OnBeatCounting();
                 DataRecorder.Instance.CommandCounting();
            }
        }
    }

    IEnumerator Dashing(string direction)
    {
        MusicHandler.Instance.PlayDashSFX();// play sound effect add by yy
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

    void switchAnim()
    {
        if (!isGrounded)
        {
            if (rb.velocity.y > 0 && anim.GetBool("jumping"))
            {
                anim.SetBool("falling", false);
            }
            if (rb.velocity.y < 0)
            {
                anim.SetBool("falling", true);
                anim.SetBool("jumping", false);
                anim.SetBool("idel", false);
            }
        }
        else if (anim.GetBool("falling"))
        {
            anim.SetBool("idel", true);
            anim.SetBool("falling", false);
            afterFall = false;
        }
        else if (afterFall && anim.GetBool("jumping"))
        {
            anim.SetBool("falling", true);
            anim.SetBool("jumping", false);
            
        }

    }
 
}