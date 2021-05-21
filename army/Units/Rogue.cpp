#include "Rogue.h"

Rogue::Rogue() : IUnit("Rogue"
                        , 60
                        , 15
                        , false
                        , std::unique_ptr<HumanState>(new HumanState())
                        , std::unique_ptr<RogueAttack>(new RogueAttack()))
{
}

Rogue::~Rogue() = default;
