using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Moving_Platform : MonoBehaviour
{
    public float speed;
    public float waitTime;
    public Transform[] movePos;

    private int i;
    private Transform playerDefTransform;
    private Transform playerTransForm;

    // Start is called before the first frame update
    void Start()
    {
        i = 1;
        playerDefTransform = GameObject.FindGameObjectWithTag("Player").transform.parent;
        playerTransForm = GameObject.FindGameObjectWithTag("Player").transform;
    }

    // Update is called once per frame
    void Update()
    {
        transform.position = Vector2.MoveTowards(transform.position, movePos[i].position, Time.deltaTime * speed);
        if (Vector2.Distance(transform.position, movePos[i].position) < 0.1f) {
            if (waitTime < 0.0f) {
                if (i == 0) {
                    i = 1;
                }
                else {
                    i = 0;
                }

                waitTime = 0.5f;
            }
            else {
                waitTime -= Time.deltaTime;
            }
        }
    }

    void OnCollisionEnter2D(Collision2D col) 
    {
        if (col.gameObject.name.Equals("Player"))
            // col.transform.parent.position = this.transform.position;
            col.gameObject.transform.SetParent(transform);
    }

    void OnCollisionExit2D(Collision2D col) 
    {
        if (col.gameObject.name.Equals("Player"))
            // col.transform.parent.position = this.transform.position;
            col.gameObject.transform.SetParent(null);
    }
}
