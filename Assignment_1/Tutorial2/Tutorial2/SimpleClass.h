//expanded from inclass tutorial 
#pragma once
#include "pluginSetting.h"
#include <iostream>
#include <fstream> //lets you access files such as txt 
#include <string> //lets you access ex: words 
using namespace std; 

struct Vector3 //grouping variables x,y,z coords 
{
	float x, y, z; 
};

class PLUGIN_API SimpleClass
{
public:
	//int SimpleFunction();
	Vector3 positionLoad(); // loads the coords and pass it to txt file 
	void positionSave(float x, float y, float z); //void - because we only need to pass it and no need for any return 
};
