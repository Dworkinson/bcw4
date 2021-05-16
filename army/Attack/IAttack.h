#pragma once

#include "../Units/IUnit.h"
// #include "../Units/Vampire.cpp"

class IAttack
{
public:
    IAttack();
    ~IAttack();

    virtual void attacking(IUnit& unit, IUnit& enemy);
    virtual void counterAttacking(IUnit& unit, IUnit& enemy);
};