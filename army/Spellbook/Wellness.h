#pragma once

#include "IHealingSpell.h"

class Wellness : public IHealingSpell
{
public:
    Wellness() : IHealingSpell("Wellness", 100, 9999)
    {
    }

    ~Wellness() = default;
};
