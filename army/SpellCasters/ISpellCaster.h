#pragma once

#include "../Units/IUnit.h"
#include "../States/SpellCasterState.h"

#include "../Spellbook/LightRestoration.h"
#include "../Spellbook/Restoration.h"
#include "../Spellbook/GreatRestoration.h"
#include "../Spellbook/Wellness.h"

#include "../Spellbook/Fireball.h"
#include "../Spellbook/Firestorm.h"
#include "../Spellbook/Commet.h"
#include "../Spellbook/Annihilation.h"

class ISpellCaster : public IUnit
{
protected:
    std::string m_specialization;

public:
    ISpellCaster(const std::string& name
                    , std::unique_ptr<SpellCasterState> state
                    , std::unique_ptr<BaseAttack> attack
                    , const std::string& specialization
                    );

    virtual ~ISpellCaster();

    virtual void useBattleSpell(IUnit& enemy, IBattleSpell& spell) = 0;
    virtual void useHealingSpell(IUnit& other, IHealingSpell& spell) = 0;

    const std::string getSpecialization();

    virtual void print() override;
};
