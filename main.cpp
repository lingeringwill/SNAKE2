
#include <iostream>
#include <SFML\Graphics.hpp>
#include <SFML\Window.hpp>
#include <SFML\System.hpp>
#include <ctime>
#include "game.h"











int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "snake");
	sf::Event ev;
	game game(&window);
	
	while (true)
	{
		game.input();
		sf::milliseconds(1000.0 / 60.0);
		
		window.clear(sf::Color::Black);
		game.render();
	


	}





}