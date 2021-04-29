#include "Berserker.h"

Berserker::Berserker() : IUnit("Berserker", 80, 20, std::unique_ptr<IState>(new HumanState()), std::unique_ptr<BerserkerAttack>(new BerserkerAttack()))
{
}

Berserker::~Berserker() = default;