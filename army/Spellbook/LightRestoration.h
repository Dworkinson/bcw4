#pragma once

#include "IHealingSpell.h"

class LightRestoration : public IHealingSpell
{
public:
    LightRestoration() : IHealingSpell("Light Restoration", 10, 10)
    {
    }

    ~LightRestoration() = default;
};
