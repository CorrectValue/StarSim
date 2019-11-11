//ѕланета.
// ќписываетс€ параметрами, унаследованными от Celestial (масса, радиус, им€)
// ѕринадлежит какой-то солнечной системе.
// »меет спрайт.
// »меет координаты.

//test

#include "Celestial.h"

class Planet : public Celestial
{
	bool viable; //свойство, определ€ющее, возможна ли жизнь на планете

	float aveTemperature;	//средн€€ температура по больнице
	float gravity;			//гравитацию вычислить

	Planet();
	void checkViability(); //метод, провер€ющий, возможна ли жизнь на планете
	void computeGravity();
};