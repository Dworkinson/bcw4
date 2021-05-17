#pragma once

#include "IBattleMage.h"
#include "../States/HumanState.h"
#include "../Attack/MageAttack.h"

class Necromancer : public IBattleMage
{
public:
    std::unique_ptr<Fireball> fireball;
    std::unique_ptr<LightRestoration> lightRestoration;

    Necromancer();
    ~Necromancer();
};
