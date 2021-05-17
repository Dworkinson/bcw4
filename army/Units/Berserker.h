#pragma once // резист к магии???

#include "IUnit.h"
#include "../States/HumanState.h"
#include "../Attack/BerserkerAttack.h"

class Berserker : public IUnit
{
public:
    Berserker();
    ~Berserker();

    void takeMagicalDamage(int mDamage) override;
    void healing(int hp) override;
};
