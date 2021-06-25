#pragma once

#include <iostream>

#include "IState.h"
#include "Properties.h"

class BerserkerState : public IState
{
public:
    BerserkerState();
    virtual ~BerserkerState();
};
