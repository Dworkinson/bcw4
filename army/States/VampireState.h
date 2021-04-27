#pragma once

#include <iostream>
#include <memory>

#include "IState.h"
#include "../Units/IUnit.h"

class VampireState : public IState
{
public:
    VampireState();
    ~VampireState();

    void bite(IUnit& enemy);
};