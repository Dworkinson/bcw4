#include "VampireState.h"

VampireState::VampireState() : IState("Vampire")
{
}

VampireState::~VampireState(){}

void VampireState::useAbility(IUnit& enemy)
{
    enemy.swichToState(std::make_unique<VampireState>());
}
