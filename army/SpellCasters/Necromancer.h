#pragma once

#include "IBattleMage.h"
#include "../States/NecromancerState.h"
#include "../Attack/BaseAttack.h"

class Necromancer : public IBattleMage
{
private:
    std::unique_ptr<std::set<IUnit*>> m_observables;

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

    void attachEnemy(IUnit *enemy);
    void detachEnemy(IUnit *enemy);
};
