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

    const int getCurrentHealth();
    const int getMaxHealth();
    const int getDamage();

    void setCurrentHealth(int hp);
    void setMaxHealth(int hp);
    void setDamage(int damage);
};
