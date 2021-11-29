using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem;
public class BossHealth : MonoBehaviour
{
    private Animator anim; // declare animator
    private int health = 80;
    public Slider healthBar; 
    public Image fill;
    public float dieTime;
    public float blinkSeconds;
    private int numOfCrit;
    private PucharsedItems pucharsedItems;
    public Text critText;
    private SpriteRenderer bossSR;

    public GameObject WinFlag;

    [SerializeField] private AudioClip dieSFX;
    // Start is called before the first frame update
    void Start()
    {
        healthBar.maxValue = health;
        numOfCrit = 0;
        pucharsedItems = new PucharsedItems();
        critText.text = pucharsedItems.getNums(2).ToString();
        anim = GameObject.Find("Boss").GetComponentInChildren<Animator>();
        WinFlag.SetActive(false);
        bossSR = GetComponent<SpriteRenderer>();
    }

    private void Update() {
        if(Keyboard.current.digit3Key.wasPressedThisFrame){
            critAttack();
        }
    }
    public void critAttack(){
        if(pucharsedItems.useItem(2) >= 0){
            numOfCrit ++;
            critText.text = pucharsedItems.getNums(2).ToString();
        }
    }
    public void GetDamage(int damage)
    {
        if(numOfCrit > 0){
            StartCoroutine(critAttackEffect());
            health -= (int)(damage * 1.2);
            numOfCrit --;
            Debug.Log("Critical Attack: " + (int)(damage * 1.2));
        }else{
            health -= damage;
            Debug.Log("Normal Attack: " + damage);
        }
        
        healthBar.value = health;
        DataRecorder.Instance.DamageCounting(damage);
        if (health <= 0)
        {
            WinFlag.SetActive(true);
            anim.SetTrigger("die");
            DataRecorder.Instance.DeathCounting();
            AudioSource.PlayClipAtPoint(dieSFX, Camera.current.transform.position);
            Invoke("killBoss", dieTime);


        }
        else
        {
            StartCoroutine(flashRed());
        }

    }
    void killBoss()
    {
        
        Destroy(gameObject);
    }

    IEnumerator flashRed()
    {
        for (int i = 0; i < 3; i++)
        {
            bossSR.color = Color.red;
            yield return new WaitForSeconds(.08f);
            bossSR.color = Color.white;
            yield return new WaitForSeconds(.08f);
        }
    }

    IEnumerator critAttackEffect()
    {
        Color ori = fill.color;
        fill.color = Color.yellow;
        yield return new WaitForSeconds(.08f);
        fill.color = ori; 
    }
}
