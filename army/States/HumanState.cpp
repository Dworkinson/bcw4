#include "HumanState.h"

HumanState::HumanState() : IState("Human")
{
}

HumanState::~HumanState() = default;

void HumanState::useAbility(IUnit& enemy)
{
}
