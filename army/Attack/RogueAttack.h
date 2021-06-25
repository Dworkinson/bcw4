#pragma once

#include "BaseAttack.h"

class RogueAttack : public BaseAttack
{
public:
    RogueAttack();
    ~RogueAttack();

    void attacking(IUnit& unit, IUnit& enemy);
};
