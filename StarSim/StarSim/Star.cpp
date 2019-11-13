#include "Star.h"

Star::Star()
{
	//определить имя звезды 
	generateName();
}

void Star::generateName()
{
	//случайным образом генерирует имя звезды
	vector<string> alphabet = {
		"A", "B", "C", "D",
		"E", "F", "G", "H",
		"I", "J", "K", "L",
		"M", "N", "O", "P",
		"Q", "R", "S", "T",
		"U", "V", "W", "X",
		"Y", "Z"
	};

	vector<string> badassStarSuffix = {
		"Big Star", "Big Blue", "New Dawn", "New Horizons", "Super", "Colossus", "Big Dog", "Sneaky Cat"
	};
	name = alphabet[rand() % 26] + alphabet[rand() % 26] + " " + std::to_string(rand() % 10) + std::to_string(rand() % 10) + std::to_string(rand() % 10);
	//проверить, существует ли уже звезда с таким именем
	if (std::find(usedStarNames.begin(), usedStarNames.end(), name) != usedStarNames.end())
	{
		//имя найдено, надо сделать более уникальным
		name += badassStarSuffix[rand() % badassStarSuffix.size];
	}
	//добавить имя в общий список
	usedStarNames.push_back(name);
}