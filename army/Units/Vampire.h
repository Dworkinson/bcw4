#pragma once

#include "IUnit.h"
#include "../States/HumanState.h"
#include "../States/VampireState.h"


class Vampire : public IUnit
{
private:
    int vampirePower;

public:
    Vampire();
    ~Vampire();

    const int getVampirePower();
};
