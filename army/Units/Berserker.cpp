#include "Berserker.h"

Berserker::Berserker() : IUnit("Berserker", 80, 20, std::unique_ptr<IState>(new HumanState()))
{
}

Berserker::~Berserker() = default;