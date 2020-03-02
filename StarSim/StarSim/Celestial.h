#ifndef Celestial_H
#define Celestial_H
// ������������ ����� (����������) ��� ������� ������ � ������� (�� ���� ���, ����� ����� �����)
// ����������� ������, ��������, ������������.
// ����� ������ (�� ����� ���� �� �����, �� ���������� �����)
// ����������.

#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
using namespace sf;

class Celestial
{
public:
	float mass, radius; //����� � ������. 
	float G = 6.67408 * pow(10, -11);//�������������� ����������

	string name;		//��� ��������� ����

	Image image;//���� �����������
	Texture texture;//���� ��������
	Sprite sprite;//���� ������

	virtual void update();
};
#endif