#pragma once

#include "IHealer.h"
#include "../States/HumanState.h"
#include "../Attack/PriestAttack.h"

class Priest : public IHealer
{
public:
    std::unique_ptr<Fireball> fireball;
    std::unique_ptr<LightRestoration> lightRestoration;

    Priest();
    ~Priest();

    void useBattleSpell(IUnit& enemy, IBattleSpell& spell) override;
};
