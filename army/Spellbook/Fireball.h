#pragma once

#include "IBattleSpell.h"

class Fireball : public IBattleSpell
{
public:
    Fireball() : IBattleSpell("Fireball", 10, 10)
    {
    }

    ~Fireball() = default;
};
