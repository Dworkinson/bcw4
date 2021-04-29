#include "Soldier.h"

Soldier::Soldier() : IUnit("Soldier", 100, 10, std::unique_ptr<IState>(new HumanState()), std::unique_ptr<SoldierAttack>(new SoldierAttack()))
{
}

Soldier::~Soldier() = default;
