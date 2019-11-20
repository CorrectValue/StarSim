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

	string name;		//��� ��������� ����

	Image image;//���� �����������
	Texture texture;//���� ��������
	Sprite sprite;//���� ������

	virtual void update();
};
#endif