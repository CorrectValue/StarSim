#ifndef Civilization_H
#define Civilization_H
//�����������.
// ����������� ������, �������������, ����������� � ������� �������������.
#include <string>
#include "SolarSystem.h"
using namespace std;

class Civilization
{
public:
	//name
	//characteristics
	//alignment?
	//relationships
	string name;	// �������� �����������
	Planet origin;	// ������ �������

	Civilization(); 
};
#endif