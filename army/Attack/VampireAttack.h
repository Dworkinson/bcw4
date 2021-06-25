#pragma once

#include "BaseAttack.h"

class VampireAttack : public BaseAttack
{
public:
    VampireAttack();
    ~VampireAttack();

    virtual void attacking(IUnit& unit, IUnit& enemy) override;
    virtual void counterAttacking(IUnit& unit, IUnit& enemy) override;
};
