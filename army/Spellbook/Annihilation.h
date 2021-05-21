#pragma once

#include "IBattleSpell.h"

class Annihilation : public IBattleSpell
{
public:
    Annihilation() : IBattleSpell("Annihilation", 100, 9999)
    {
    }

    ~Annihilation() = default;
};
