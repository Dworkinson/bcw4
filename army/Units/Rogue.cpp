#include "Rogue.h"

Rogue::Rogue() : IUnit("Rogue", 60, 15, std::unique_ptr<IState>(new HumanState()), std::unique_ptr<RogueAttack>(new RogueAttack()))
{
}

Rogue::~Rogue() = default;
