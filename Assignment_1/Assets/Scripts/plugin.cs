//must
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;

public class plugin : MonoBehaviour
{
    const string DLL_NAME = "Tutorial2";

    [DllImport(DLL_NAME)]
    private static extern Vector3 positionLoad();

    [DllImport(DLL_NAME)]
    private static extern void positionSave(float x, float y, float z);

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.Y)) //setting the key Y for loading postion 
        {
            transform.localPosition = positionLoad(); // posotionLoad returns vector - this takes it and stores it in this (positon) variable
        }

        if (Input.GetKey(KeyCode.T))  // setting the key T for save position 
        {
            positionSave(transform.localPosition.x, transform.localPosition.y, transform.localPosition.z); //taking the loacl position and sending the position to the dll 
        }
    }
}
