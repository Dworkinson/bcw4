#include "VampireState.h"

VampireState::VampireState() : IState("Vampire")
{
}

VampireState::~VampireState(){}

void VampireState::bite(IUnit& enemy)
{
    enemy.swichToState(std::make_unique<VampireState>());
}
