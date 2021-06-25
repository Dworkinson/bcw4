#include "Rogue.h"

Rogue::Rogue() : IUnit("Rogue"
                        , std::unique_ptr<RogueState>(new RogueState())
                        , std::unique_ptr<RogueAttack>(new RogueAttack()))
{
}

Rogue::~Rogue() = default;
