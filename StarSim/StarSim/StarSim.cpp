// StarSim.cpp : Defines the entry point for the console application.
//
#include <SFML/Graphics.hpp>

#include "stdafx.h"

using namespace sf;
int _tmain(int argc, _TCHAR* argv[])
{
	View view(FloatRect(200, 200, 300, 200));
	RenderWindow window(sf::VideoMode(1024, 768), "GETTING STARTED");
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
	}

	return 0;
}

