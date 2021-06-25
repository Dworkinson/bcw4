#pragma once

#include "ISpellCaster.h"
#include "../States/SpellCasterState.h"
#include "../Attack/BaseAttack.h"

class IBattleMage : public ISpellCaster
{
public:
    IBattleMage(const std::string& name, std::unique_ptr<SpellCasterState> state, std::unique_ptr<BaseAttack> attack, const std::string& specialization);

    virtual ~IBattleMage();

    virtual void useBattleSpell(IUnit& enemy, IBattleSpell& spell);
    virtual void useHealingSpell(IUnit& other, IHealingSpell& spell);
};
