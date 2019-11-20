#ifndef SolarSystem_H
#define SolarSystem_H
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
	vector<float> planetsDistances; //вектор, содержащий информацию о расстоянии от звезды до каждой из планет
	string name;
	vector<float> coordinates; //абсолютные координаты в звёздном пространстве

	SolarSystem();
	SolarSystem(int planetsCount);
};
#endif