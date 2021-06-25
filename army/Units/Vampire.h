#pragma once

#include "IUnit.h"
// #include "../States/HumanState.h"
#include "../States/VampireState.h"
#include "../Attack/VampireAttack.h"
#include "Bite.h"

class Vampire : public IUnit, public Bite
{
public:
    Vampire();
    ~Vampire();

    void bite(IUnit& enemy);
};
