//expanded from inclass tutorial 
#include "Wrapper.h"
SimpleClass simpleClass;

PLUGIN_API Vector3 positionLoad() // allowing the dll to be transefered -  sendind the numbers from unity
{
	return simpleClass.positionLoad();
}

PLUGIN_API void positionSave(float x, float y, float z)
{
	return simpleClass.positionSave(x, y, z); //allowing the dll to be transefered - get the numbers from unity 

}