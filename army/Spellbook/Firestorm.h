#pragma once

#include "IBattleSpell.h"

class Firestorm : public IBattleSpell
{
public:
    Firestorm() : IBattleSpell("Fire storm", 20, 30)
    {
    }

    ~Firestorm() = default;
};
