#pragma once

#include "IBattleMage.h"
#include "../States/HumanState.h"
#include "../Attack/MageAttack.h"

class Wizard : public IBattleMage
{
public:
    std::unique_ptr<Fireball>           fireball;
    std::unique_ptr<Firestorm>          firestorm;
    std::unique_ptr<Commet>             commet;

    std::unique_ptr<LightRestoration>   lightRestoration;
    std::unique_ptr<Restoration>        restoration;

    Wizard();
    ~Wizard();
};
