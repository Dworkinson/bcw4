#pragma once

#include <iostream>

#include "IState.h"
#include "Properties.h"

class DemonState : public IState
{
public:
    DemonState();
    virtual ~DemonState();
};
