#ifndef Star_H
#define Star_H
//������.
// ��������� �� Celestial ��� ����������.
// ����������� ��������� �������.
// ����� ���������� 
// ����������� �������� �����, ������������.

#include "Celestial.h"
#include <vector>

class Star : public Celestial //public ����� - ����������� �������. �����
{
public:
	static vector<string> usedStarNames;

	Star();
	void generateName();
};
#endif