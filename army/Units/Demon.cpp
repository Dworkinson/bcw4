#include "Demon.h"

Demon::Demon() : IUnit("Demon", 30, 10, false, std::unique_ptr<HumanState>(new HumanState()), std::unique_ptr<SoldierAttack>(new SoldierAttack()))
{
}

Demon::~Demon() = default;
