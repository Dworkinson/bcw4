#include "Soldier.h"

Soldier::Soldier() : IUnit("Soldier"
                            , std::unique_ptr<SoldierState>(new SoldierState())
                            , std::unique_ptr<BaseAttack>(new BaseAttack()))
{
}

Soldier::~Soldier() = default;
