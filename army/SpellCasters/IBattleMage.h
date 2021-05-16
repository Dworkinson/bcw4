#pragma once

#include "ISpellCaster.h"
#include "../States/HumanState.h"
#include "../Attack/MageAttack.h"

class IBattleMage : public ISpellCaster
{
public:
    IBattleMage(const std::string& name
                    , int hp
                    , int damage
                    , bool isUndead
                    , std::unique_ptr<IState> state
                    , std::unique_ptr<IAttack> attack
                    , const std::string& specialization
                    , int mp);

    virtual ~IBattleMage();

    virtual void useBattleSpell(IUnit& enemy, IBattleSpell& spell);
    virtual void useHealingSpell(IUnit& other, IHealingSpell& spell);
};
