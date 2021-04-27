#include "Rogue.h"

Rogue::Rogue() : IUnit("Rogue", 60, 15, std::unique_ptr<IState>(new HumanState()))
{
}

Rogue::~Rogue() = default;
