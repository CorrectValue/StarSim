#ifndef Planet_H
#define Planet_H
//�������.
// ����������� �����������, ��������������� �� Celestial (�����, ������, ���)
// ����������� �����-�� ��������� �������.
// ����� ������.
// ����� ����������.

//test

#include "Celestial.h"
#include <vector>
using namespace std;

class Planet : public Celestial
{
public:
	static vector<string> appearances; //����� ������ ������� ������������� ������ 
	bool viable; //��������, ������������, �������� �� ����� �� �������

	float aveTemperature;	//������� ����������� �� ��������
	float gravity;			//���������� ���������

	vector<float> coordinates; //���������� ������������ ������ � �������. ���������� ������ - 0;0;0

	Planet();
	Planet(bool state); //���� �� ����, ����� � ��� �������, �� ����� �����
	void checkViability(); //�����, �����������, �������� �� ����� �� �������
	void computeGravity();
	void prepareAppearances();
	void generateName();
};
#endif