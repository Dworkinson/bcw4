#pragma once

#include <iostream>

#include "IState.h"
#include "Properties.h"

class VampireState : public IState
{
public:
    VampireState();
    virtual ~VampireState();
};
