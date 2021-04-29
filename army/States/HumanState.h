#pragma once

#include <iostream>

#include "IState.h"
#include "../Units/IUnit.h"

class HumanState : public IState
{
public:
    HumanState();
    ~HumanState();

    void useAbility(IUnit& enemy);

};
