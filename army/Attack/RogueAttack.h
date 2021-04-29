#pragma once

#include "IAttack.h"

class RogueAttack : public IAttack
{
public:
    RogueAttack();
    ~RogueAttack();

    void attacking(IUnit& unit, IUnit& enemy);
};