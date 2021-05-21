#pragma once

#include "IHealingSpell.h"

class GreatRestoration : public IHealingSpell
{
public:
    GreatRestoration() : IHealingSpell("GreatRestoration", 30, 60)
    {
    }

    ~GreatRestoration() = default;
};
