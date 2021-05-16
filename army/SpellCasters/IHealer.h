#pragma once

#include "ISpellCaster.h"
#include "../States/HumanState.h"
#include "../Attack/MageAttack.h"

class IHealer : public ISpellCaster
{
public:
    IHealer(const std::string& name
                    , int hp
                    , int damage
                    , bool isUndead
                    , std::unique_ptr<IState> state
                    , std::unique_ptr<IAttack> attack
                    , const std::string& specialization
                    , int mp);

    virtual ~IHealer();

    virtual void useBattleSpell(IUnit& enemy, IBattleSpell& spell);
    virtual void useHealingSpell(IUnit& other, IHealingSpell& spell);
};
