//����� ����������� ����������
//�������� ������ Planet.h
//��������� ����� � ����������� Celestia.h

#include "Celestial.h"

struct Point {
	double x, y;
};

class Body : public Celestial
{
public:
	Point Speed, Pos;//������� � ��������
	void Move();
	void SpeedBody(Body *t1, Body *t2);
	
};

