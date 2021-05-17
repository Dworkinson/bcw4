#include "IHealer.h"

IHealer::IHealer(const std::string& name
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

IHealer::~IHealer() = default;

void IHealer::useBattleSpell(IUnit& enemy, IBattleSpell& spell)
{
    std::cout << this->getName() << " using a '" << spell.getName() << "' to the " << enemy.getName() << std::endl;

    if ( this->getCurrentMana() < spell.getCoast()) {
        std::cout << "Not anoгпh mana for the spell" << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int tmpHP = enemy.getCurrentHealth();

    enemy.takeMagicalDamage(spell.getDamage() / 2);
    this->m_currentMana -= spell.getCoast();

    if (!enemy.isAlive()) {
        std::cout << "... but he is already dead." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int wound = tmpHP - enemy.getCurrentHealth();

    std::cout << enemy.getName() << " -" << wound << " HP (" << enemy.getCurrentHealth() << "/" << enemy.getMaxHealth() << ")" << std::endl;

}

void IHealer::useHealingSpell(IUnit& other, IHealingSpell& spell)
{
    if ( this->getCurrentMana() < spell.getCoast()) {
        std::cout << "Not anoгпh mana for the spell" << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }
    other.healing(spell.getPower());
    this->m_currentMana -= spell.getCoast();
}