#pragma once

#include <iostream>
#include <memory>

#include "IState.h"
#include "../Units/IUnit.h"

class WolfState : public IState
{
public:
    WolfState();
    ~WolfState();

    void useAbility(IUnit& enemy);
};