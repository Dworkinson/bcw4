#pragma once

#include <iostream>

#include "SpellCasterState.h"
#include "Properties.h"

class HealerState : public SpellCasterState
{
public:
    HealerState();
    virtual ~HealerState();
};
