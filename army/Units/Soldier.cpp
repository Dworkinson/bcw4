#include "Soldier.h"

Soldier::Soldier() : IUnit("Soldier", 100, 10, false, std::unique_ptr<HumanState>(new HumanState()), std::unique_ptr<SoldierAttack>(new SoldierAttack()))
{
}

Soldier::~Soldier() = default;
