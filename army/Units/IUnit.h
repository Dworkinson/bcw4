#pragma once

#include <iostream>
#include <memory>
#include <set>

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
    bool m_isUndead;
    std::unique_ptr<IAttack> m_attack;
    std::unique_ptr<std::set<IUnit*>> m_observers;

public:
    std::unique_ptr<IState> m_state;
    
    IUnit(const std::string& name, int hp, int damage, bool isUndead, std::unique_ptr<IState> state, std::unique_ptr<IAttack> attack);
    virtual ~IUnit();

    void swichToState(std::unique_ptr<IState> state);
    void swichAttack(std::unique_ptr<IAttack> attack);

    const std::string getName();
    const int getCurrentHealth();
    const int getMaxHealth();
    const int getDamage();

    void setCurrentHealth(int hp);
    void setMaxHealth(int hp);
    void setDamage(int damage);
    void setStatus(bool isUndead);

    bool isAlive();
    virtual void attacking(IUnit& enemy);
    virtual void counterAttacking(IUnit& enemy);

    void takeDamage(int damage);
    virtual void healing(int hp);

    virtual void takeMagicalDamage(int mDamage);
    
    bool isUndead();

    virtual void print();

    virtual void attachNecromancer(IUnit *enemy);
    virtual void detachNecromancer(IUnit *enemy);

    virtual void attachEnemy(IUnit *enemy);
    virtual void detachEnemy(IUnit *enemy);
};
