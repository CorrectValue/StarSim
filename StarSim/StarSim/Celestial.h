#ifndef Celestial_H
#define Celestial_H
// Родительский класс (суперкласс) для классов звезды и планеты (мб чего ещё, потом видно будет)
// Описывается массой, радиусом, координатами.
// Имеет спрайт (на самом деле не имеет, но наследники имеют)
// Абстрактен.

#include <string>
using namespace std;

class Celestial
{
public:
	float mass, radius; //масса и радиус. 
	float s;
	string name;		//имя небесного тела

	virtual void update();
};
#endif