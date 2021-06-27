#pragma once

#include "IBattleMage.h"
#include "../States/NecromancerState.h"
#include "../Attack/BaseAttack.h"
#include "../Observer/Observer.h"

class Necromancer : public IBattleMage, public Observer
{
public:
    std::unique_ptr<Fireball>           fireball;
    std::unique_ptr<Firestorm>          firestorm;

    std::unique_ptr<LightRestoration>   lightRestoration;
    std::unique_ptr<Restoration>        restoration;

    Necromancer();
    ~Necromancer();

    void takeDamage(int damage) override;

    void attacking(IUnit& enemy) override;
    void counterAttacking(IUnit& enemy) override;

    void useBattleSpell(IUnit& enemy, IBattleSpell& spell) override;
};
