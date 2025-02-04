#include <iostream>
#include "SFML/Graphics.hpp"
#include "fmt/ranges.h"
#include "Player.h"

int main() {
    //--------------------------------------------INTIALIZE--------------------------------------------
    //create the window
    sf::ContextSettings settings;
    settings.antialiasingLevel = 16;
    sf::RenderWindow window(sf::VideoMode(1920,1080), "RPG GAME", sf::Style::Default, settings);

    //--------------------------------------------INTIALIZE--------------------------------------------
    std::vector<sf::RectangleShape> bullets;
    float bulletSpeed = 0.5f;

    Player player;
    player.Initialize();
    //--------------------------------------------Load-------------------------------------------------
    player.Load();
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

        player.Update();
        //--------------------------------------------UPDATE-----------------------------------------------

        //--------------------------------------------DRAW-------------------------------------------------

        //clear the window with black color

        window.clear(sf::Color::Black);
        player.Draw();
        window.draw(player.sprite);
        //draw everything here...
        //window draw(...);
        window.display();
        //--------------------------------------------DRAW-------------------------------------------------
    }
    return 0;
}
