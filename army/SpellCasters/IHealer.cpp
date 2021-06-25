#include "IHealer.h"

IHealer::IHealer(const std::string& name
                    , std::unique_ptr<SpellCasterState> state
                    , std::unique_ptr<BaseAttack> attack
                    , const std::string& specialization)
    : ISpellCaster( name
                    , std::move(state)
                    , std::move(attack)
                    , specialization)
{}

IHealer::~IHealer() = default;

void IHealer::useBattleSpell(IUnit& enemy, IBattleSpell& spell)
{
    std::cout << this->getName() << " using a '" << spell.getName() << "' to the " << enemy.getName() << std::endl;

    if ( dynamic_cast<SpellCasterState*>(this->m_state.get())->getCurrentMana() < spell.getCoast()) {
        std::cout << "Not enough mana for the spell" << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int tempMP = dynamic_cast<SpellCasterState*>(this->m_state.get())->getCurrentMana() - spell.getCoast();
    dynamic_cast<SpellCasterState*>(this->m_state.get())->setCurrentMana(tempMP);

    std::cout << "Mana: -" << spell.getCoast()
                << " (" << dynamic_cast<SpellCasterState*>(this->m_state.get())->getCurrentMana()
                << "/" << dynamic_cast<SpellCasterState*>(this->m_state.get())->getMaxMana()
                << ")" << std::endl;
    std::cout << "---------------------" << std::endl;

    if (!enemy.isAlive()) {
        std::cout << "... enemy is already dead." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int tmpHP = enemy.m_state->getCurrentHealth();

    enemy.takeMagicalDamage(spell.getDamage() / 2);
    int wound = tmpHP - enemy.m_state->getCurrentHealth();

    std::cout << enemy.getName() << " -" << wound << " HP ("
                << enemy.m_state->getCurrentHealth() << "/"
                << enemy.m_state->getMaxHealth() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;
}

void IHealer::useHealingSpell(IUnit& other, IHealingSpell& spell)
{
    std::cout << this->getName() << " using a '" << spell.getName() << "' to the " << other.getName() << std::endl;

    if ( dynamic_cast<SpellCasterState*>(this->m_state.get())->getCurrentMana() < spell.getCoast()) {
        std::cout << "Not enough mana for the spell" << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    std::cout << "Mana: -" << spell.getCoast()
                << " (" << dynamic_cast<SpellCasterState*>(this->m_state.get())->getCurrentMana()
                << "/" << dynamic_cast<SpellCasterState*>(this->m_state.get())->getMaxMana() << ")"
                << std::endl;
    std::cout << "---------------------" << std::endl;

    if (!other.isAlive()) {
        std::cout << "... but he is dead." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int tmpHP = other.m_state->getCurrentHealth();

    other.healing(spell.getCoast());
    int tempMP = dynamic_cast<SpellCasterState*>(this->m_state.get())->getCurrentMana() - spell.getCoast();
    dynamic_cast<SpellCasterState*>(this->m_state.get())->setCurrentMana(tempMP);
    
    int restoredHP = other.m_state->getCurrentHealth() - tmpHP;

    std::cout << other.getName() << " restored " << restoredHP
                << " HP (" << other.m_state->getCurrentHealth() << "/" << other.m_state->getMaxHealth() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;
}