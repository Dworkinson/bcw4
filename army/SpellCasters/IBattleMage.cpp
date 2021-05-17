#include "IBattleMage.h"

IBattleMage::IBattleMage(const std::string& name
                    , int hp
                    , int damage
                    , bool isUndead
                    , std::unique_ptr<IState> state
                    , std::unique_ptr<IAttack> attack
                    , const std::string& specialization
                    , int mp)
    : ISpellCaster( name
                    , hp
                    , damage
                    , isUndead
                    , std::move(state)
                    , std::move(attack)
                    , specialization
                    , mp)
{}

IBattleMage::~IBattleMage() = default;

void IBattleMage::useBattleSpell(IUnit& enemy, IBattleSpell& spell)
{
    std::cout << this->getName() << " using a '" << spell.getName() << "' to the " << enemy.getName() << std::endl;

    if ( this->getCurrentMana() < spell.getCoast()) {
        std::cout << "Not anoгпh mana for the spell" << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int tmpHP = enemy.getCurrentHealth();

    enemy.takeMagicalDamage(spell.getDamage());
    this->m_currentMana -= spell.getCoast();

    if (!enemy.isAlive()) {
        std::cout << "... but he is already dead." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int wound = tmpHP - enemy.getCurrentHealth();

    std::cout << enemy.getName() << " -" << wound << " HP (" << enemy.getCurrentHealth() << "/" << enemy.getMaxHealth() << ")" << std::endl;

}

void IBattleMage::useHealingSpell(IUnit& other, IHealingSpell& spell)
{
    if ( this->getCurrentMana() < spell.getCoast()) {
        std::cout << "Not anoгпh mana for the spell" << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }
    other.healing(spell.getPower() / 2);
    this->m_currentMana -= spell.getCoast();
}