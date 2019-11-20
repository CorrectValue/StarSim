#ifndef SolarSystem_H
#define SolarSystem_H
//��������� �������
//�������� � ���� ������(-�) � ����� ������
// ������ - ��������� �����
// ����� ������ - std::vector

#include "Planet.h"
#include "Star.h"
#include <vector>
using namespace std;

class SolarSystem
{
	Star star;
	int numOfPlanets;
	vector<Planet> planets;
	string name;
	vector<float> coordinates; //���������� ���������� � ������� ������������

	SolarSystem();
};
#endif