//
// Created by kryst on 04.02.2025.
//

#ifndef ENEMY_H
#define ENEMY_H
#pragma once
#include "SFML\Graphics.hpp"

class Enemy
{
  private:
    sf::Texture texture;

  public:
    sf::Sprite sprite;


    void Initialize();
    void Load();
    void Update();
    void Draw();

};



#endif //ENEMY_H
