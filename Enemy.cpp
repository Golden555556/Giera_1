//
// Created by kryst on 04.02.2025.
//
#include "Enemy.h"
#include "iostream"

void Enemy::Initialize() {
    sprite.setPosition(800,400);
}

void Enemy::Load() {
    if(texture.loadFromFile("Assets/Fighter/Idle.png"))
    {
        std::cout << "Enemy texture Loaded!" << std::endl;
        sprite.setTexture(texture);
        sprite.setTextureRect(sf::IntRect(82 + 82, 46, 46, 82));

    }
    else
    {
        std::cout << "Enemy texture Failed to Load" << std::endl;
    }
}

void Enemy::Update()
{
    sf::Vector2 position = sprite.getPosition();
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::I)){
        sprite.setPosition(position - sf::Vector2f(0, 0.5));
    }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::K)){
        sprite.setPosition(position + sf::Vector2f(0,0.5));
    }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::J)){
        sprite.setPosition(position - sf::Vector2f(0.5,0));
    }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::L)){
        sprite.setPosition(position + sf::Vector2f(0.5,0));
    }
}

void Enemy::Draw() {

}

