using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrapPlatform : MonoBehaviour
{
    // Start is called before the first frame update
    private Animator anim;
    private BoxCollider2D bx2d;
    void Start()
    {
        anim = GetComponent<Animator>();
        bx2d = GetComponent<BoxCollider2D>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnCollisionEnter2D(Collision2D col) 
    {
        if (col.gameObject.name.Equals("Player"))
        {
            print("Collapse");
            anim.SetTrigger("Collapse");
        }
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        //&& other.GetType().ToString() == "UnityEngine.BoxCollider2D"
        if (other.gameObject.CompareTag("Player"))
        {
            print("Collapse");
            anim.SetTrigger("Collapse");
        }
    }

    void DisableBoxCollider2D()
    {
        bx2d.enabled = false;
    }

    void DestoryTrapPlatform()
    {
        Destroy(gameObject);
    }

}
