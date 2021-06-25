#pragma once

#include <iostream>

#include "IState.h"
#include "Properties.h"

class WolfState : public IState
{
public:
    WolfState();
    virtual ~WolfState();
};
