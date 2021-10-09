using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
public class DataRecorder : MonoBehaviour
{
    /// <summary>
    /// created by Yue Yu
    /// </summary>

    string filename = "";

    float levelTimer;
    
    // Start is called before the first frame update
    void Start()
    {
        filename = Application.dataPath + "/playerStats.csv";
        
        levelTimer = 0;
    }

    // Update is called once per frame
    void Update()
    {
        levelTimer += Time.deltaTime;
        
    }

    public void writeCSV()
    {
        TextWriter tw = new StreamWriter(filename, false);
        tw.WriteLine("1,2,3,4");
        tw.Close();

        tw = new StreamWriter(filename, true);
        //for () ;

        tw.Close();
    }
}
