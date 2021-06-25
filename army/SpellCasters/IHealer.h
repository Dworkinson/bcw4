#pragma once

#include "ISpellCaster.h"
#include "../States/SpellCasterState.h"
#include "../Attack/BaseAttack.h"

class IHealer : public ISpellCaster
{
public:
    IHealer(const std::string& name
                    , std::unique_ptr<SpellCasterState> state
                    , std::unique_ptr<BaseAttack> attack
                    , const std::string& specialization);

    virtual ~IHealer();

    virtual void useBattleSpell(IUnit& enemy, IBattleSpell& spell);
    virtual void useHealingSpell(IUnit& other, IHealingSpell& spell);
};
