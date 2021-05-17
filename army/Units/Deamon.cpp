#include "Deamon.h"

Deamon::Deamon() : IUnit("Deamon", 30, 10, false, std::unique_ptr<HumanState>(new HumanState()), std::unique_ptr<SoldierAttack>(new SoldierAttack()))
{
}

Deamon::~Deamon() = default;
