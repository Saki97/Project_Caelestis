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
    public GameObject blood;


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

        //怪兽碰撞伤害玩家
        if(collision.gameObject.tag.Equals("Player")){
            if(playerHealth != null && !playerController.isDashing)
            {
                playerHealth.GetDamage(damage);
                Debug.Log("Player get hurt by Monster_Tomato! Player HP: " + playerHealth.health + " !");
            }

        }
        //怪兽被玩家用Knif杀死
        if(collision.gameObject.tag.Equals("knif")){
            Instantiate(blood, transform.position, Quaternion.identity);
            Destroy(gameObject);
        }
        
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
