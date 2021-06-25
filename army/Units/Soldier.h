#pragma once

#include "IUnit.h"
#include "../States/SoldierState.h"
#include "../Attack/BaseAttack.h"

class Soldier : public IUnit
{
public:
    Soldier();
    ~Soldier();
};
