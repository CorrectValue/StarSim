//Солнечная система
//Содержит в себе звезду(-ы) и набор планет
// Звезда - отдельный класс
// Набор планет - std::vector

#include "Planet.h"
#include "Star.h"
#include <vector>
using namespace std;

class SolarSystem
{
	Star star;
	int numOfPlanets;
	vector<Planet> planets;
	string name;

	SolarSystem();
};