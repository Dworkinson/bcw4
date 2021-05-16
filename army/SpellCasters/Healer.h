#pragma once

#include "IHealer.h"
#include "../States/HumanState.h"
#include "../Attack/MageAttack.h"

class Healer : public IHealer
{
public:
    std::unique_ptr<Fireball> fireball;
    std::unique_ptr<LightRestoration> lightRestoration;

    Healer();
    ~Healer();
};
