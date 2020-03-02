#include "Body.h"



void Body::Move()
{
	Pos.x += Speed.x;
	Pos.y += Speed.y;
}

void Body::SpeedBody(Body *t1, Body *t2) 
{
	double x = (t2->Pos.x) - (t1->Pos.x);//���������� ��������� ������� ����������� ����� ���
	double y = (t2->Pos.y) - (t1->Pos.y);
	double length = sqrt(x*x + y * y);//������ ������ �������, ��� ��� ������������

	x = x / length;//������������
	y = y / length;

	double a = (G*t1->mass*t2->mass) / (length*length);//������ ���� �� ��� ���

	double a1 = a / t1->mass; //������������ ��������� �� ������� ������ �������
	double a2 = a / t2->mass;

	t1->Speed.x += x * a1;
	t1->Speed.y += y * a1;

	t2->Speed.x -= x * a2;
	t2->Speed.y -= y * a2;
	
	t1->Move();
	t2->Move();
}





