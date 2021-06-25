#include "Vampire.h"

Vampire::Vampire() : IUnit("Vampire"
                            , std::unique_ptr<VampireState>(new VampireState())
                            , std::unique_ptr<VampireAttack>(new VampireAttack()))
{
}

Vampire::~Vampire() = default;

void Vampire::bite(IUnit& enemy)
{
    Bite::turnTo(*this, enemy);
}
