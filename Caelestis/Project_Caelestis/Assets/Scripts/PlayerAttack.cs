using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;

public class PlayerAttack : MonoBehaviour
{
    public PolygonCollider2D col1;
    public CapsuleCollider2D col2;
    private Animator anim;
    private float dieTime = 2.0f;

    private float nextAttackTime = 0;
    public float attackCD;
    public int attackDamage;
    public float moveSpeed = 15.0f;

    public BossHealth bossHealth;
    void Start()
    {
        anim = GameObject.Find("Player").GetComponentInChildren<Animator>();
        if (SceneManager.GetActiveScene().name == "level3")
        {
            bossHealth = GameObject.Find("Boss").GetComponentInChildren<BossHealth>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        attack();
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("enemy"))
        {
 
            // other.gameObject.GetComponent<Rigidbody2D>().velocity = new Vector3(3, 0, 0);
            // other.gameObject.GetComponent<EnemyControl>().killMonster();
            // Destroy(other.gameObject);
        }
        else if (other.gameObject.CompareTag("boss") && other.GetType().ToString() == "UnityEngine.BoxCollider2D")
        {
            if (bossHealth != null)
            {
                bossHealth.GetDamage(attackDamage);
            }
        }
    }

    // void killMonster(Collider2D other){
    //     Destroy(other.gameObject);
    // }


    void attack()
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
        else if(getAttackDown)
        {
            // if (Input.GetButtonDown("Attack"))
            if (Time.time > nextAttackTime)
            {
                if (getAttackDown)
                {
                    DataRecorder.Instance.CommandCounting();
                    anim.SetTrigger("kicking");
                    StartCoroutine(StartAttack());
                    //normalParticles();
                    nextAttackTime = Time.time + attackCD;
                }
            }

        }

    }

    IEnumerator StartAttack()
    {
        attackDamage = 1;
        col1.enabled = true;
        MusicHandler.Instance.PlayAttackSFX();
        yield return new WaitForSeconds(0.4f);
        col1.enabled = false;
    }

    IEnumerator StartSuperAttack()
    {
        attackDamage = 5;
        col2.enabled = true;
        yield return new WaitForSeconds(0.3f);
        col2.enabled = false;
    }


}
