#include <iostream>

#include "SFML/Graphics.hpp"
#include "fmt/ranges.h"

int main() {
    //--------------------------------------------INTIALIZE--------------------------------------------
    //create the window
    sf::ContextSettings settings;
    settings.antialiasingLevel = 16;
    sf::RenderWindow window(sf::VideoMode(800,600), "RPG GAME", sf::Style::Default, settings);

    sf::CircleShape triangle(50.f,3);
    triangle.setFillColor(sf::Color::Red);
    triangle.setOutlineThickness(10.f);
    triangle.setOutlineColor(sf::Color::White);
    triangle.setPosition(sf::Vector2f(100,100));

    sf::CircleShape octagon(50.f, 8);
    octagon.setFillColor(sf::Color::Blue);
    octagon.setOutlineThickness(8.f);
    octagon.setOutlineColor(sf::Color::Green);
    octagon.setPosition(sf::Vector2f(100,100));

    //--------------------------------------------INTIALIZE--------------------------------------------

    //--------------------------------------------UPDATE-----------------------------------------------

    //run the  program as long as the window is open
    while(window.isOpen())
    {
        //check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while(window.pollEvent(event))
        {
            //"close requested" event: we close the window
            if(event.type == sf::Event::Closed)
                window.close();
        }
        //--------------------------------------------UPDATE-----------------------------------------------

        //--------------------------------------------DRAW-------------------------------------------------

        //clear the window with black color

        window.clear(sf::Color::Black);
        window.draw(octagon);
        window.draw(triangle);
        //draw everything here...
        //window draw(...);
        window.display();
        //--------------------------------------------DRAW-------------------------------------------------
    }
    return 0;
}
