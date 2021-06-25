#pragma once

#include <iostream>

#include "IState.h"
#include "Properties.h"

class HumanState : public IState
{
public:
    HumanState();
    virtual ~HumanState();
};
