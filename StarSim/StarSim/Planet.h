//�������.
// ����������� �����������, ��������������� �� Celestial (�����, ������, ���)
// ����������� �����-�� ��������� �������.
// ����� ������.
// ����� ����������.

//test

#include "Celestial.h"

class Planet : public Celestial
{
	bool viable; //��������, ������������, �������� �� ����� �� �������

	float aveTemperature;	//������� ����������� �� ��������
	float gravity;			//���������� ���������

	Planet();
	void checkViability(); //�����, �����������, �������� �� ����� �� �������
	void computeGravity();
};