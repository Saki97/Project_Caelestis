using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sin_Move : MonoBehaviour
{
    [SerializeField]
    private float moveSpeed = 1.0f;

    [SerializeField]
    private float frequency = 3.0f;

    [SerializeField]
    private float magnitude = 4.0f;

    private bool facingRight = true;

    private Vector3 pos, localScale;
    private Rigidbody2D rb;
    private BoxCollider2D col;


    // Start is called before the first frame update
    void Start()
    {
        pos = transform.position;
        localScale = transform.localScale;
    }

    // Update is called once per frame
    void Update()
    {
        CheckWhereToFace();
        if(facingRight){
            MoveRight();
        }         
        else
        {
            MoveLeft();
        }

    }

    void CheckWhereToFace(){
        if(pos.x < -23f){
            facingRight = true;
        }
        else if(pos.x > 7f){
            facingRight = false;
        }
        if( (facingRight && localScale.x < 0) || ( (!facingRight) && (localScale.x > 0) ) ){
            localScale.x *= -1;
        }

        transform.localScale = localScale;

    }

    void MoveRight(){
        pos += transform.right * Time.deltaTime * moveSpeed;
        transform.position = pos + transform.up * Mathf.Sin(Time.time * frequency) * magnitude;
    }

    void MoveLeft(){
        pos -= transform.right * Time.deltaTime * moveSpeed;
        transform.position = pos + transform.up * Mathf.Sin(Time.time * frequency) * magnitude; 
    }
}
