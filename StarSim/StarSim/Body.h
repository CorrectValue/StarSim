//класс описывающий гравитацию
//родитель класса Planet.h
//наследует массу у суперкласса Celestia.h

#include "Celestial.h"

struct Point {
	double x, y;
};

class Body : public Celestial
{
public:
	Point Speed, Pos;//позиция и скорость
	void Move();
	void SpeedBody(Body *t1, Body *t2);
	
};

