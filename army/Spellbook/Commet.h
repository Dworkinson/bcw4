#pragma once

#include "IBattleSpell.h"

class Commet : public IBattleSpell
{
public:
    Commet() : IBattleSpell("Commet", 30, 60)
    {
    }

    ~Commet() = default;
};
