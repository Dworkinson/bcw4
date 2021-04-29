#pragma once

#include <iostream>

class IProperties
{
public:
    int currentHealth;
    int maxHealth;
    int damage;

    IProperties(int hp, int damage);
    ~IProperties();

    int getCurrentHealth();
    int getMaxHealth();
    int getDamage();
};
