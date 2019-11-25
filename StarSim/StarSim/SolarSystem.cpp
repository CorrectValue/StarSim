#include "SolarSystem.h"

SolarSystem::SolarSystem()
{
	//default constructor
	//

}

SolarSystem::SolarSystem(int planetsCount)
{
	//параметризованный конструктор 
	numOfPlanets = planetsCount;
	star = Star();
	planets.resize(planetsCount);
	for (int i = 0; i < planets.size(); i++)
	{
		//generate all planets one-by-one
		planets[i] = Planet(fixed); 
	}
}