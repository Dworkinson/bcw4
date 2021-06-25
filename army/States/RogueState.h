#pragma once

#include <iostream>

#include "IState.h"
#include "Properties.h"

class RogueState : public IState
{
public:
    RogueState();
    virtual ~RogueState();
};
