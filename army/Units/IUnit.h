#pragma once

#include <iostream>
#include <memory>

#include "../States/IState.h"

class IUnit
{
protected:
    std::string m_name;
    int m_currentHealth;
    int m_maxHealth;
    int m_damage;
    std::unique_ptr<IState> m_state;

    void setCurrentHealth(int hp);
    void setMaxHealth(int hp);
    void setDamage(int damage);

public:
    IUnit(const std::string& name, int maxHealth, int damage, std::unique_ptr<IState> state);
    ~IUnit();

    void swichToState(std::unique_ptr<IState> state);

    const std::string getName();
    const int getCurrentHealth();
    const int getMaxHealth();
    const int getDamage();

    bool isAlive();

    void takeDamage(int damage);
    void healing(int hp);

    virtual void print();
};
