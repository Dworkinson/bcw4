#pragma once

#include "IAttack.h"

// class Vampire;
// #include "../Units/Vampire.cpp"

class VampireAttack : public IAttack
{
public:
    VampireAttack();
    ~VampireAttack();

    void attacking(IUnit& unit, IUnit& enemy);
    void counterAttacking(IUnit& unit, IUnit& enemy);
};