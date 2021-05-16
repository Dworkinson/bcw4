#pragma once

#include "IUnit.h"
#include "../States/HumanState.h"
#include "../States/VampireState.h"
#include "../Attack/VampireAttack.h"

class Vampire : public IUnit
{
public:
    Vampire();
    ~Vampire();

    void bite(IUnit& enemy);
    // void vampirism(int hp);
};
