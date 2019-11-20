#ifndef Planet_H
#define Planet_H
//Планета.
// Описывается параметрами, унаследованными от Celestial (масса, радиус, имя)
// Принадлежит какой-то солнечной системе.
// Имеет спрайт.
// Имеет координаты.

//test

#include "Celestial.h"
#include <vector>
using namespace std;

class Planet : public Celestial
{
public:
	bool viable; //свойство, определяющее, возможна ли жизнь на планете

	float aveTemperature;	//средняя температура по больнице
	float gravity;			//гравитацию вычислить

	vector<float> coordinates; //координаты относительно звезды в системе. координаты звезды - 0;0;0

	Planet();
	void checkViability(); //метод, проверяющий, возможна ли жизнь на планете
	void computeGravity();
};
#endif