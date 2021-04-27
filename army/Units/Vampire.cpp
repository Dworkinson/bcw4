#include "Vampire.h"

Vampire::Vampire() : IUnit("Vampire", 100, 8, std::unique_ptr<IState>(new HumanState()))
{
    this->vampirePower = 4;
}

Vampire::~Vampire() = default;

const int Vampire::getVampirePower()
{
    return this->vampirePower;
}
