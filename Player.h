//
// Created by kryst on 04.02.2025.
//

#ifndef PLAYER_H
#define PLAYER_H
#pragma once
#include "SFML/Graphics.hpp"


class  Player
{
private:
    sf::Texture texture;
public:
    sf::Sprite sprite;
public:
    void Initialize(); //<- called once per App start
    void Load(); //<- called once per App start
    void Update(); //<- once per frame
    void Draw(); //<- once per frame
};



#endif //PLAYER_H
