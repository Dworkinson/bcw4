#include "WolfState.h"

WolfState::WolfState() : IState("Wolf")
{
}

WolfState::~WolfState(){}

void WolfState::bite(IUnit& enemy)
{
    enemy.swichToState(std::make_unique<WolfState>());
}
