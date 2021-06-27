#pragma once

#include <iostream>
#include <memory>
#include <set>

#include "../States/IState.h"
#include "../Observer/Subject.h"
#include "../Observer/Observer.h"

class BaseAttack;

class IUnit : public Subject
{
protected:
    std::string m_name;
    std::unique_ptr<BaseAttack> m_attack;
    // std::unique_ptr<std::set<IUnit*>> m_observers;

public:
    std::unique_ptr<IState> m_state;
    
    IUnit(const std::string& name, std::unique_ptr<IState> state, std::unique_ptr<BaseAttack> attack);
    virtual ~IUnit();

    void swichToState(std::unique_ptr<IState> state);
    void swichAttack(std::unique_ptr<BaseAttack> attack);

    const std::string getName();

    bool isAlive();
    virtual void attacking(IUnit& enemy);
    virtual void counterAttacking(IUnit& enemy);

    virtual void takeDamage(int damage);
    virtual void healing(int hp);

    virtual void takeMagicalDamage(int mDamage);

    virtual void print();

};
