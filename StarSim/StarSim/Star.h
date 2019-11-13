//Звезда.
// Наследует от Celestial ряд параметров.
// Принадлежит солнечной системе.
// Имеет координаты 
// Описывается временем жизни, температурой.

#include "Celestial.h"
#include <vector>

class Star : public Celestial //public здесь - модификатор доступа. Читай
{
	static vector<string> usedStarNames;

	Star();
	void generateName();
};