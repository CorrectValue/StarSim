//������.
// ��������� �� Celestial ��� ����������.
// ����������� ��������� �������.
// ����� ���������� 
// ����������� �������� �����, ������������.

#include "Celestial.h"
#include <vector>

class Star : public Celestial //public ����� - ����������� �������. �����
{
	static vector<string> usedStarNames;

	Star();
	void generateName();
};