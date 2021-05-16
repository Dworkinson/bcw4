#pragma once

#include "../Units/IUnit.h"
#include "../Spellbook/Spellbook.h"

class ISpellCaster : public IUnit
{
protected:
    std::string m_specialization;
    int m_maxMana;
    int m_currentMana;

    // std::unique_ptr<Fireball> fireBall;
    // std::unique_ptr<LightRestoration> lightRestoration;

public:
    ISpellCaster(const std::string& name
                    , int hp
                    , int damage
                    , bool isUndead
                    , std::unique_ptr<IState> state
                    , std::unique_ptr<IAttack> attack
                    , const std::string& specialization
                    , int mp
                    // , std::unique_ptr<Fireball> fireBall
                    // , std::unique_ptr<LightRestoration> lightRestoration
                    );

    virtual ~ISpellCaster();

    virtual void useBattleSpell(IUnit& enemy, IBattleSpell& spell) = 0;
    virtual void useHealingSpell(IUnit& other, IHealingSpell& spell) = 0;

    const std::string getSpecialization();
    const int getMaxMana();
    const int getCurrentMana();

    void setCurrentMana(int mp);
    void setMaxMana(int mp);

    void print();
};
