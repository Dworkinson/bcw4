#pragma once

#include "IHealer.h"
#include "../States/PriestState.h"
#include "../Attack/PriestAttack.h"

class Priest : public IHealer
{
public:
    std::unique_ptr<Fireball>           fireball;
    std::unique_ptr<Firestorm>          firestorm;

    std::unique_ptr<LightRestoration>   lightRestoration;
    std::unique_ptr<Restoration>        restoration;
    std::unique_ptr<GreatRestoration>   greatRestoration;
    std::unique_ptr<Wellness>           wellness;

    Priest();
    ~Priest();

    void useBattleSpell(IUnit& enemy, IBattleSpell& spell) override;
};
