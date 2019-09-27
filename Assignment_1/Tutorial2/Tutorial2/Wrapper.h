//expanded from inclass tutorial 
#pragma once
#include "pluginSetting.h"
#include "SimpleClass.h"
#ifdef __cplusplus
extern "C"
{
#endif
	// Put your functions here
	PLUGIN_API Vector3 positionLoad();  
	PLUGIN_API void positionSave(float x, float y, float z); 
#ifdef __cplusplus
}
#endif