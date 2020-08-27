#pragma once
#include <SFML\Graphics.hpp>
#include <SFML\Window.hpp>
#include <SFML\System.hpp>
#include <vector>

struct Apple
{
	

	sf::Sprite sprite;
	sf::Texture texture;
	
	int x, y;
	Apple()
	{


		texture.loadFromFile("apple.png");
		sprite.setTexture(texture);

	}

};

class game
{
public:
	//functions
	void update();
	game(sf::RenderWindow* w);
	void render();
	void input();

	sf::RenderWindow* window;

	// game asset


	//game logic
	std::vector<Apple>apples;





};

