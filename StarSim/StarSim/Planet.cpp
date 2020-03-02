#include "Planet.h"

vector<string> Planet::appearances;
vector<string> Planet::usedPlanetNames;

void Planet::computeGravity()
{
	//�����, ����������� ���������� �� �������, ������ �� � ������������
	//�������?
	

}

void Planet::checkViability()
{
	//�����, �����������, �������� �� ������������� ����� �� �������
	//���� ����, ���� ������? �����������? ����������?
	//�������
}

Planet::Planet()
{
	//���������� ��� �������
	generateName();
}

void Planet::prepareAppearances()
{
	//����� ��� ���������� ������ ������� ������������� ������
	appearances = {
		"planet0"
	};
}

void Planet::generateName()
{

	vector<int> planetNumber = {
		0,1,2,3,4,5,6,7,8,9
	};

	vector<string> planetSuffix = {
	"a", "b", "c", "d",
	"e", "f", "g", "h",
	"i", "j", "k", "l",
	"m", "n", "o", "p",
	"q", "r", "s", "t",
	"u", "v", "w", "x",
	"y", "z"
	};

	vector<string> planetName = {
		"Kepler", "Hubble", "Newton", "Adams", "Gauss", "Javel", "Pinet", "Linei"
	};

	name = planetName[rand() % 8] + "-" + planetNumber[rand() % 10] + planetNumber[rand() % 10] + planetNumber[rand() % 10] + planetSuffix[rand() % 26];

	if (std::find(usedPlanetNames.begin(), usedPlanetNames.end(), name) != usedPlanetNames.end())
	{
		name += planetSuffix[rand() % planetSuffix.size()];
	}
	usedPlanetNames.push_back(name);

}