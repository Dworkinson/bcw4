#pragma once

#include <iostream>

#include "SpellCasterState.h"
#include "Properties.h"

class PriestState : public SpellCasterState
{
public:
    PriestState();
    virtual ~PriestState();
};
