#pragma once

#include "BaseAttack.h"

class PriestAttack : public BaseAttack
{
public:
    PriestAttack();
    ~PriestAttack();

    void attacking(IUnit& unit, IUnit& enemy) override;
    void counterAttacking(IUnit& unit, IUnit& enemy) override;
};
