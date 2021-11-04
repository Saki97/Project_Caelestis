using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAniController : MonoBehaviour
{
    private Rigidbody2D rb;
    private Vector3 aniScale;
    private Vector3 plScale;
    private Transform playerTrans;
    // Start is called before the first frame update
    void Start()
    {
        playerTrans = GameObject.Find("Player").transform;
        plScale = playerTrans.localScale;
        rb = GetComponent<Rigidbody2D>();
        aniScale = rb.transform.localScale;
    }

    // Update is called once per frame
    void Update()
    {
        if(plScale.x > 0)
        {
            aniScale = new Vector3(1, 1, 1);
        }
        else if(plScale.x < 0)
        {
            aniScale = new Vector3(-1, 1, 1);
        }
    }
}
