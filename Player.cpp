//
// Created by kryst on 04.02.2025.
//

#include "Player.h"
#include <iostream>


void Player::Initialize()
{
    // sprite.setPosition(sf::Vector2f(800, 400));
}

void Player::Load()
{
    if(texture.loadFromFile("Assets/MainCharacter/spritesheet.png"))
    {
        std::cout << "Player Images Loaded!" << std::endl;
        sprite.setTexture(texture);
        //X,Y, Width, Height
        // playerSprite.setTextureRect(sf::IntRect(41, 46, 46, 82));
        int x = 82;
        int y = 128;
        sprite.setTextureRect(sf::IntRect(41+x+41, 46, 46, 82));
    }
    else
    {
        std::cout << "Player Images Failed  to Load!" << std::endl;
    }
}

void Player::Update()
{
    sf::Vector2 position = sprite.getPosition();
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
        sprite.setPosition(position - sf::Vector2f(0, 0.5));
    }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
        sprite.setPosition(position + sf::Vector2f(0,0.5));
    }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
        sprite.setPosition(position - sf::Vector2f(0.5,0));
    }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
        sprite.setPosition(position + sf::Vector2f(0.5,0));
    }
}

void Player::Draw() {

}