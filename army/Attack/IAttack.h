#pragma once

#include "../Units/IUnit.h"

class IAttack
{
public:
    IAttack();
    ~IAttack();

    virtual void attacking(IUnit& unit, IUnit& enemy);
    virtual void counterAttacking(IUnit& unit, IUnit& enemy);
};