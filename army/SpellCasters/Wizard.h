#pragma once

#include "IBattleMage.h"
#include "../States/HumanState.h"
#include "../Attack/MageAttack.h"

class Wizard : public IBattleMage
{
public:
    std::unique_ptr<Fireball> fireball;
    std::unique_ptr<LightRestoration> lightRestoration;

    Wizard();
    ~Wizard();
};
