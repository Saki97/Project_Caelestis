using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerAttack : MonoBehaviour
{
    private PolygonCollider2D col1;
    private CapsuleCollider2D col2;
    private Animator anim;
    public ParticleSystem ps;
    public ParticleSystem ps1;
    public ParticleSystem ps2;
    public ParticleSystem ps3;
    public ParticleSystem ps4;
    private float nextAttackTime = 0;
    public float attackCD;
    // Start is called before the first frame update
    void Start()
    {
        col1 = GetComponent<PolygonCollider2D>();
        col2 = GetComponent<CapsuleCollider2D>();
        anim = GameObject.FindGameObjectWithTag("Player").GetComponentInChildren<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        Attack();
        superAttack();
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("enemy"))
        {
            Debug.Log("Tomato die");
            Destroy(other.gameObject);
        }
    }


    void Attack()
    {
        var gamepad = Gamepad.current;
        var keyboard = Keyboard.current;
        bool getAttackDown;
        if (gamepad != null || keyboard != null)
        {
            if (gamepad == null)
            {
                getAttackDown = keyboard.spaceKey.wasPressedThisFrame;
            }
            else
            {
                getAttackDown = gamepad.rightTrigger.wasPressedThisFrame || keyboard.spaceKey.wasPressedThisFrame;
            }

        }
        else
        {
            Debug.Log("Cannot find gamepad or keyboard");
            return;
        }

        // if (Input.GetButtonDown("Attack"))
        if (Time.time > nextAttackTime)
        {
            if (getAttackDown)
            {
                Debug.Log("Attack");
                StartCoroutine(StartAttack());
                normalParticles();
                nextAttackTime = Time.time + attackCD;
            }
        }

    }

    void superAttack()
    {
        var gamepad = Gamepad.current;
        var keyboard = Keyboard.current;
        bool getAttackDown;
        if (gamepad != null || keyboard != null)
        {
            if (gamepad == null)
            {
                getAttackDown = keyboard.spaceKey.wasPressedThisFrame;
            }
            else
            {
                getAttackDown = gamepad.rightTrigger.wasPressedThisFrame || keyboard.spaceKey.wasPressedThisFrame;
            }

        }
        else
        {
            Debug.Log("Cannot find gamepad or keyboard");
            return;
        }

        if (getAttackDown && MusicHandler._instance.CheckInputTiming())
        {
            Debug.Log("superAttack");
            StartCoroutine(StartSuperAttack());
            superParticles();
            nextAttackTime = Time.time + attackCD;
        }

        // if (Input.GetButtonDown("Attack"))

    }

    IEnumerator StartAttack()
    {
        col1.enabled = true;
        anim.SetTrigger("attack"); // trigger attack animation
        yield return new WaitForSeconds(0.1f);
        col1.enabled = false;
    }

    IEnumerator StartSuperAttack()
    {
        col2.enabled = true;
        anim.SetTrigger("attack"); // trigger attack animation
        yield return new WaitForSeconds(0.1f);
        col2.enabled = false;
    }


    void normalParticles()
    {
        ps4.Play();
    }

    void superParticles()
    {
        ps.Play();
        ps1.Play();
        ps2.Play();
        ps3.Play();
        ps4.Play();
    }

}
