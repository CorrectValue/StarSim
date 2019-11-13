#include "Star.h"

Star::Star()
{
	//���������� ��� ������ 
	generateName();
}

void Star::generateName()
{
	//��������� ������� ���������� ��� ������
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
	//���������, ���������� �� ��� ������ � ����� ������
	if (std::find(usedStarNames.begin(), usedStarNames.end(), name) != usedStarNames.end())
	{
		//��� �������, ���� ������� ����� ����������
		name += badassStarSuffix[rand() % badassStarSuffix.size];
	}
	//�������� ��� � ����� ������
	usedStarNames.push_back(name);
}