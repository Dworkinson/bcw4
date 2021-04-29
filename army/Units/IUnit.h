#pragma once

#include <iostream>
#include <memory>

// #include "../States/IState.h"
#include "../States/HumanState.h"
#include "../States/WolfState.h"
#include "../States/VampireState.h"

class IAttack;

class IUnit
{
protected:
    std::string m_name;
    int m_currentHealth;
    int m_maxHealth;
    int m_damage;
    std::unique_ptr<IAttack> m_attack;

    void setCurrentHealth(int hp);
    void setMaxHealth(int hp);
    void setDamage(int damage);

public:
    std::unique_ptr<IState> m_state;
    
    IUnit(const std::string& name, int maxHealth, int damage, std::unique_ptr<IState> state, std::unique_ptr<IAttack> attack);
    ~IUnit();

    void swichToState(std::unique_ptr<IState> state);
    void swichAttack(std::unique_ptr<IAttack> attack);

    const std::string getName();
    const int getCurrentHealth();
    const int getMaxHealth();
    const int getDamage();

    bool isAlive();
    virtual void attacking(IUnit& enemy);
    virtual void counterAttacking(IUnit& enemy);

    void takeDamage(int damage);
    void healing(int hp);

    virtual void print();
};
