#pragma once

#include "IBattleMage.h"
#include "../States/HumanState.h"
#include "../Attack/MageAttack.h"

#include "../Units/Deamon.h"

class Warlock : public IBattleMage
{
public:
    int deamonsCounter;
    std::unique_ptr<Fireball> fireball;
    std::unique_ptr<LightRestoration> lightRestoration;

    Warlock();
    ~Warlock();

    // Deamon* createDeamon();
    int getDeamonsCounter();
    void summonDeamon();
};
