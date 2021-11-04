using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShakingOnBets : MonoBehaviour
{
    [SerializeField] public float shakeAmt;
    public bool shaking = false;
    private Rigidbody2D rb;  // declare rigid body
    private Vector3 playerSize;

    private void Start()
    {
        rb = GetComponent<Rigidbody2D>(); // get rigid body of the player
       playerSize = rb.transform.localScale;
    }

    // Update is called once per frame
    void Update()
    {
        if (shaking
            && !rb.GetComponent<PlayerController>().isDashing
            && !rb.GetComponent<PlayerController>().isMoving
            && rb.GetComponent<PlayerController>().isGrounded
            && !rb.GetComponent<PlayerHealth>().isBlinking
            )
        {
            rb.transform.localScale = new Vector3(1.2f, 1, 1);
        }
        else rb.transform.localScale = playerSize;

        if (MusicHandler._instance.CheckInputTiming())
        {
            shaking = true;
        }
        else
        {
            shaking = false;
        }

    }
}
