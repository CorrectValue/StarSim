#ifndef Celestial_H
#define Celestial_H
// ������������ ����� (����������) ��� ������� ������ � ������� (�� ���� ���, ����� ����� �����)
// ����������� ������, ��������, ������������.
// ����� ������ (�� ����� ���� �� �����, �� ���������� �����)
// ����������.

#include <string>
using namespace std;

class Celestial
{
public:
	float mass, radius; //����� � ������. 
	float s;
	string name;		//��� ��������� ����

	virtual void update();
};
#endif