//Солнечная система
//Содержит в себе звезду(-ы) и набор планет
// Звезда - отдельный класс
// Набор планет - std::vector

#include "Planet.h"
#include "Star.h"
#include <vector>

class SolarSystem
{
	Star star;
	std::vector<Planet> planets;
};