#include "game.h"
#include <SFML\Graphics.hpp>
#include <iostream>
#include <SFML\Graphics.hpp>
#include <SFML\Window.hpp>
#include <SFML\System.hpp>
#include <ctime>


//function for display

void game::update()
{


}

game::game(sf::RenderWindow*w)
{
    window = w;

    Apple apple;
    apples.push_back(apple);
}

void game::render()
{
    for (const auto& apple : apples) {
        window->draw(apple.sprite);
    }

    window->display();
}

void game::input()
{
    sf::Event event;
    while (window->pollEvent(event))
    {
        switch (event.type)
        {
            // window closed
        case sf::Event::Closed:
            window->close();
            break;


        case sf::Event::KeyPressed:
            std::cout << "key has been pressed " << std::endl;

            break;


        default:
            break;


        }
    }
}
