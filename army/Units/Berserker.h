#pragma once

#include "IUnit.h"
#include "../States/BerserkerState.h"
#include "../Attack/BaseAttack.h"

class Berserker : public IUnit
{
public:
    Berserker();
    ~Berserker();

    void takeMagicalDamage(int mDamage) override;
    void healing(int hp) override;
};
