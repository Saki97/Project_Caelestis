using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerAttack : MonoBehaviour
{
    private PolygonCollider2D col;
    private Animator anim;
    // Start is called before the first frame update
    void Start()
    {
        col = GetComponent<PolygonCollider2D>();
        anim = GameObject.FindGameObjectWithTag("Player").GetComponentInChildren<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        Attack();
    }

    void OnTriggerEnter2D (Collider2D other)
    {
        if (other.gameObject.CompareTag("enemy")){
            Debug.Log("Tomato die");
            Destroy(other.gameObject);
        }
    }


    void Attack()
    {
        var gamepad = Gamepad.current;
        var keyboard = Keyboard.current;
        bool getAttackDown;
        if(gamepad != null || keyboard != null){
            if(gamepad == null){
                getAttackDown = keyboard.spaceKey.wasPressedThisFrame;
            }else{
                getAttackDown = gamepad.rightTrigger.wasPressedThisFrame || keyboard.spaceKey.wasPressedThisFrame;
            }
            
        }else{
            Debug.Log("Cannot find gamepad or keyboard");
            return;
        }

        // if (Input.GetButtonDown("Attack"))
        if(getAttackDown && MusicHandler._instance.CheckInputTiming())
        {
            Debug.Log("Onbeat!");
            StartCoroutine(StartAttack());
        }
    }


    IEnumerator StartAttack()
    {
        col.enabled = true;
        anim.SetTrigger("attack"); // trigger attack animation
        yield return new WaitForSeconds(0.1f);
        col.enabled = false;
    }
}
