#ifndef Civilization_H
#define Civilization_H
//Цивилизация.
// Описывается именем, расположением, отношениями с другими цивилизациями.
#include <string>
#include "SolarSystem.h"
using namespace std;

class Civilization
{
public:
	//name
	//characteristics
	//alignment?
	//relationships
	string name;	// название цивилизации
	Planet origin;	// родная планета

	Civilization(); 
};
#endif