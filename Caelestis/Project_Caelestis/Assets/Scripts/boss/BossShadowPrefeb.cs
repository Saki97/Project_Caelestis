using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossShadowPrefeb : MonoBehaviour
{
    private Transform boss;

    private SpriteRenderer thisSprite;
    private SpriteRenderer playerSprite;

    private Color color;

    public float activeTime;
    public float activeStart;

    private float alpha;
    public float alphaSet;
    public float alphaMultiplier;

    void OnEnable()
    {
        boss = GameObject.Find("Boss").transform;
        thisSprite = GetComponent<SpriteRenderer>();
        playerSprite = boss.GetComponent<SpriteRenderer>();

        alpha = alphaSet;

        thisSprite.sprite = playerSprite.sprite;

        transform.position = boss.position;
        transform.localScale = boss.localScale;
        transform.rotation = boss.rotation;

        activeStart = Time.time;
    }

    void Update()
    {
        alpha *= alphaMultiplier;

        color = new Color(0.877f, 0.369f, 0.236f, alpha);

        thisSprite.color = color;

        if (Time.time >= activeStart + activeTime)
        {
            ShadowController.instance.ReturnPool(this.gameObject);
        }
    }
}