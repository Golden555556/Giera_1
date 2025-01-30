#include <iostream>

#include "SFML/Graphics.hpp"
#include "fmt/ranges.h"

int main() {
    //--------------------------------------------INTIALIZE--------------------------------------------
    //create the window
    sf::ContextSettings settings;
    settings.antialiasingLevel = 16;
    sf::RenderWindow window(sf::VideoMode(800,600), "RPG GAME", sf::Style::Default, settings);



    //--------------------------------------------INTIALIZE--------------------------------------------
    //--------------------------------------------Load-------------------------------------------------
    sf::Texture playerTexture;
    sf::Sprite playerSprite;

    if(playerTexture.loadFromFile("C:/Users/kryst/CLionProjects/Giera_GitHub/Giera_v1/Assets/MainCharacter/player.png"))
    {
        std::cout << "Player Images Loaded!" << std::endl;
        playerSprite.setTexture(playerTexture);
    }
    else
    {
        std::cout << "Player Images Failed  to Load!" << std::endl;
    }
    //--------------------------------------------Load-------------------------------------------------


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
        window.draw(playerSprite);
        //draw everything here...
        //window draw(...);
        window.display();
        //--------------------------------------------DRAW-------------------------------------------------
    }
    return 0;
}
