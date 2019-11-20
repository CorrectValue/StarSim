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
	bool viable; //��������, ������������, �������� �� ����� �� �������

	float aveTemperature;	//������� ����������� �� ��������
	float gravity;			//���������� ���������

	vector<float> coordinates; //���������� ������������ ������ � �������. ���������� ������ - 0;0;0

	Planet();
	void checkViability(); //�����, �����������, �������� �� ����� �� �������
	void computeGravity();
};
#endif