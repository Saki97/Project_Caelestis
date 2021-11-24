using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BossHealth : MonoBehaviour
{
    private Animator anim; // declare animator
    public int health = 100;
    public Slider healthBar; 
    public float dieTime;
    private Renderer myRender;
    public float blinkSeconds;
    private bool isCritAttack = false;
    private PucharsedItems pucharsedItems;
    public Text critText;
    // Start is called before the first frame update
    void Start()
    {
        pucharsedItems = new PucharsedItems();
        critText.text = pucharsedItems.getNums(2).ToString();
        myRender = GetComponent<Renderer>();
        anim = GameObject.Find("Boss").GetComponentInChildren<Animator>();
    }

    public void critAttack(){
        isCritAttack = pucharsedItems.useItem(2) >= 0;
        if(isCritAttack){
            critText.text = pucharsedItems.getNums(2).ToString();
        }
    }
    public void GetDamage(int damage)
    {
        if(isCritAttack){
            health -= (int)(damage * 1.2);
            isCritAttack = !isCritAttack;
            Debug.Log("Critical Attack: " + (int)(damage * 1.2));
        }else{
            health -= damage;
            Debug.Log("Normal Attack: " + damage);
        }
        
        healthBar.value = health;
        DataRecorder.Instance.DamageCounting(damage);
        if (health <= 0)
        {
            anim.SetTrigger("die");
            DataRecorder.Instance.DeathCounting();
            Invoke("killBoss", dieTime);


        }
        else
        {
            StartCoroutine(redBlink());
        }

    }
    void killBoss()
    {
        Destroy(gameObject);
    }

    IEnumerator redBlink()
    {
        anim.SetBool("wounded",true);
        yield return new WaitForSeconds(blinkSeconds);
        anim.SetBool("wounded", false);
    }
}
