#include <iostream>

#include "SFML/Graphics.hpp"
#include "fmt/ranges.h"

int main() {
    //--------------------------------------------INTIALIZE--------------------------------------------
    //create the window
    sf::ContextSettings settings;
    settings.antialiasingLevel = 16;
    sf::RenderWindow window(sf::VideoMode(1920,1080), "RPG GAME", sf::Style::Default, settings);

    //--------------------------------------------INTIALIZE--------------------------------------------
    //--------------------------------------------Load-------------------------------------------------
    sf::Texture playerTexture;
    sf::Sprite playerSprite;

    if(playerTexture.loadFromFile("Assets/MainCharacter/spritesheet.png"))
    {
        std::cout << "Player Images Loaded!" << std::endl;
        playerSprite.setTexture(playerTexture);
        //X,Y, Width, Height
        // playerSprite.setTextureRect(sf::IntRect(41, 46, 46, 82));
        int x = 82;
        int y = 128;
        playerSprite.setTextureRect(sf::IntRect(41+x+41, 46, 46, 82));
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

        sf::Vector2 position = playerSprite.getPosition();
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
            playerSprite.setPosition(position - sf::Vector2f(0, 0.5));
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
            playerSprite.setPosition(position + sf::Vector2f(0,0.5));
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
            playerSprite.setPosition(position - sf::Vector2f(0.5,0));
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
            playerSprite.setPosition(position + sf::Vector2f(0.5,0));
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
