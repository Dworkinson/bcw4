#include "HealerState.h"

HealerState::HealerState() : SpellCasterState("Healer", HEALER_HP, HEALER_DAMAGE, HEALER_IU, HEALER_MP)
{
}

HealerState::~HealerState(){}