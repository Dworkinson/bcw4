#include "WolfState.h"

WolfState::WolfState() : IState("Wolf")
{
}

WolfState::~WolfState(){}

void WolfState::useAbility(IUnit& enemy)
{
    enemy.swichToState(std::make_unique<WolfState>());
}
