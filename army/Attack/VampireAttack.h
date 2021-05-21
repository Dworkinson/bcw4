#pragma once

#include "IAttack.h"

class VampireAttack : public IAttack
{
public:
    VampireAttack();
    ~VampireAttack();

    void attacking(IUnit& unit, IUnit& enemy);
    void counterAttacking(IUnit& unit, IUnit& enemy);
};
