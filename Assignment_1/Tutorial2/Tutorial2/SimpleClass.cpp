//reference:
//SAVE & LOAD SYSTEM in Unity
//Brackeys-https://www.youtube.com/watch?v=XOjd_qU2Ido
//Dec 2, 2018

// //expanded from inclass tutorial 

#include "SimpleClass.h"

//loading Function
Vector3 SimpleClass::positionLoad()
{
	Vector3 locationLoading;
	ifstream file; //accessing the functions from the lib - for input 

	//allowing us to open the txt file 
	file.open("postions.txt");

	file >> locationLoading.x >> locationLoading.y >> locationLoading.z; //putting the locations into x,y,z (first - x, second - y, third - z)

	file.close(); //closing the txt file 

	return locationLoading;
}

//Saving Function 
void SimpleClass::positionSave(float x, float y, float z)
{
	ofstream file; //opening position information 
	file.open("postions.txt"); //copying the position

	file << x << endl << y << endl << z << endl; //writing to the txt file

	file.close(); //closing the txt file 
}
