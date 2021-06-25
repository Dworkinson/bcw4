#pragma once

#include <iostream>

#include "SpellCasterState.h"
#include "Properties.h"

class WizardState : public SpellCasterState
{
public:
    WizardState();
    virtual ~WizardState();
};
