#pragma once

#include "IHealingSpell.h"

class Restoration : public IHealingSpell
{
public:
    Restoration() : IHealingSpell("Restoration", 20, 30)
    {
    }

    ~Restoration() = default;
};
