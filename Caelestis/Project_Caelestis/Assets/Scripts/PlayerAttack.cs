using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerAttack : MonoBehaviour
{
    public PolygonCollider2D col1;
    public CapsuleCollider2D col2;
    private Animator anim;
    public ParticleSystem ps;
    public ParticleSystem ps1;
    public ParticleSystem ps2;
    public ParticleSystem ps3;
    private float nextAttackTime = 0;
    public float attackCD;
    // Start is called before the first frame update
    void Start()
    {
        //col1 = GetComponent<PolygonCollider2D>();
        //col2 = GetComponent<CapsuleCollider2D>();
        anim = GameObject.Find("Player").GetComponentInChildren<Animator>();
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
                DataRecorder.Instance.CommandCounting();
                StartCoroutine(StartAttack());
                //normalParticles();
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
            
            
            DataRecorder.Instance.OnBeatCounting();
            DataRecorder.Instance.CommandCounting();
            anim.SetTrigger("superAttack");
            StartCoroutine(StartSuperAttack());
            nextAttackTime = Time.time + attackCD;
        }

        // if (Input.GetButtonDown("Attack"))

    }

    IEnumerator StartAttack()
    {
        col1.enabled = true;
        //anim.SetTrigger("attack"); // trigger attack animation
        MusicHandler.Instance.PlayAttackSFX();
        yield return new WaitForSeconds(0.25f);
        col1.enabled = false;
    }

    IEnumerator StartSuperAttack()
    {
        col2.enabled = true;
        yield return new WaitForSeconds(0.3f);
        col2.enabled = false;
        Debug.Log("superAttack");
    }


    void normalParticles()
    {
        ps3.Play();
    }

    void superParticles()
    {
        ps.Play();
        ps1.Play();
        ps2.Play();
        ps3.Play();
    }

}
