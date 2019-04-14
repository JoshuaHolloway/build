using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PluginWrapper : MonoBehaviour {

    private AndroidJavaObject javaClass;
    
	// Use this for initialization
	void Start () {
        javaClass = new AndroidJavaObject("com.josh.mediaplayerlibrary.TutorialClass");
        javaClass.Call("LogNativeAndroidLogcatMessage");
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
