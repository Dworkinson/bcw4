#pragma once

#include "../Units/IUnit.h"

class BaseAttack
{
public:
    BaseAttack();
    ~BaseAttack();

    virtual void attacking(IUnit& unit, IUnit& enemy);
    virtual void counterAttacking(IUnit& unit, IUnit& enemy);
};
