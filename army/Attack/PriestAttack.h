#pragma once

#include "MageAttack.h"

class PriestAttack : public MageAttack
{
public:
    PriestAttack();
    ~PriestAttack();

    void attacking(IUnit& unit, IUnit& enemy) override;
    void counterAttacking(IUnit& unit, IUnit& enemy) override;
};
