#ifndef Celestial_H
#define Celestial_H
// Родительский класс (суперкласс) для классов звезды и планеты (мб чего ещё, потом видно будет)
// Описывается массой, радиусом, координатами.
// Имеет спрайт (на самом деле не имеет, но наследники имеют)
// Абстрактен.

#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
using namespace sf;

class Celestial
{
public:
	float mass, radius; //масса и радиус. 
	float G = 6.67408 * pow(10, -11);//гравитационная постоянная

	string name;		//имя небесного тела

	Image image;//сфмл изображение
	Texture texture;//сфмл текстура
	Sprite sprite;//сфмл спрайт

	virtual void update();
};
#endif