using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShopItemButton : MonoBehaviour
{
    public int itemID;
    public Text price;
    public Text quatity;
    public Text name;
    public Text description;
    public GameObject ShopManager;
    void Update()
    {
        price.text = ShopManager.GetComponent<ShopManager>().shopItems[itemID, 1].ToString();
        quatity.text = "Amount: " + ShopManager.GetComponent<ShopManager>().shopItems[itemID, 2].ToString();
        name.text = ShopManager.GetComponent<ShopManager>().item_description[itemID, 0];
        description.text = ShopManager.GetComponent<ShopManager>().item_description[itemID, 1];
    }
}
