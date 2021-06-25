#pragma once

#include <iostream>

// class IUnit;

class IState
{
protected:
    std::string m_stateName;
    int m_currentHealth;
    int m_maxHealth;
    int m_damage;
    bool m_isUndead;

public:
    IState(const std::string& stateName, int HP, int damage, bool isUndead);
    virtual ~IState();

    const std::string getStateName();
    const int getMaxHealth();
    const int getCurrentHealth();
    const int getDamage();
    const bool getIsUndead();

    void setCurrentHealth(int HP);

    virtual const void printState();
};