#pragma once

#include <set>

#include "IBattleMage.h"
#include "../States/HumanState.h"
#include "../Attack/MageAttack.h"

#include "../Units/Demon.h"

class Warlock : public IBattleMage
{
private:
    std::unique_ptr<std::set<Demon*>> demonsLeash;
    int demonsCounter;

public:

    std::unique_ptr<Fireball> fireball;
    std::unique_ptr<LightRestoration> lightRestoration;

    Warlock();
    ~Warlock();

    int getDemonsCounter();

    void summonDemon();
    void killDemons();

    void print() override;

};
