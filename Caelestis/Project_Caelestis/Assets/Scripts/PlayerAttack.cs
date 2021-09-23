using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

    void OnCollisionEnter2D (Collision2D other)
    {
        if (other.gameObject.CompareTag("enemy")){
            Debug.Log("Tomato die");
            Destroy(other.gameObject);
        }
    }


    void Attack()
    {
        if (Input.GetButtonDown("Attack"))
        {
            anim.SetTrigger("attack"); // trigger attack animation

            StartCoroutine(StartAttack());
        }
    }


    IEnumerator StartAttack()
    {
        col.enabled = true;
        yield return new WaitForSeconds(0.1f);
        col.enabled = false;
    }
}
