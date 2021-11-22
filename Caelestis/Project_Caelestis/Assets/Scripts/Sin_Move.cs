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

    private Vector3 pos, localScale,startLoc;
    private Rigidbody2D rb;
    private BoxCollider2D col;
    private PlayerHealth playerHealth;
    private PlayerController playerController;
    private Transform player;
    public int damage = 1;


    // Start is called before the first frame update
    void Start()
    {
        pos = transform.position;
        startLoc = transform.position;
        localScale = transform.localScale;
        rb = this.GetComponent<Rigidbody2D>();
        col = GetComponent<BoxCollider2D>();
        player = GameObject.Find("Player").transform;
        playerHealth = GameObject.Find("Player").GetComponent<PlayerHealth>();
        playerController  = GameObject.Find("Player").GetComponent<PlayerController>();
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

    void OnTriggerEnter2D(Collider2D collision){
        if(collision.gameObject.CompareTag("Player") && collision.GetType().ToString() == "UnityEngine.CapsuleCollider2D")
        {
            if(playerHealth != null && !playerController.isDashing)
            {
                playerHealth.GetDamage(damage);
                Debug.Log("Player get hurt by Monster_O! Player HP: " + playerHealth.health + " !");
            }
        }
        // if(collision.gameObject.CompareTag("Player") && collision.GetType().ToString() == "UnityEngine.PolygonCollider2D"){
        //     //怪兽在player左方
        //     if(transform.position.x < player.position.x){
        //         Vector3 target_position = new Vector3(this.transform.position.x - 2, this.transform.position.y);
        //         transform.position = Vector2.MoveTowards(this.transform.position, target_position, moveSpeed * Time.deltaTime);
        //     }
        //     //怪兽在player右方
        //     else{
        //         Vector3 target_position = new Vector3(this.transform.position.x + 2, this.transform.position.y);
        //         transform.position = Vector2.MoveTowards(this.transform.position, target_position, moveSpeed * Time.deltaTime);
        //     }
        // }
        
    }
    void CheckWhereToFace(){
        if( (startLoc.x - pos.x) > 12f){
            facingRight = true;
        }
        else if( (pos.x - startLoc.x) > 18f){
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
