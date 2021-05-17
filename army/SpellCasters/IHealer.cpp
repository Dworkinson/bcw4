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

    this->m_currentMana -= spell.getCoast();

    std::cout << "Mana: -" << spell.getCoast() << " (" << this->getCurrentMana() << "/" << this->getMaxMana() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;

    if (!enemy.isAlive()) {
        std::cout << "... enemy is already dead." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int tmpHP = enemy.getCurrentHealth();

    enemy.takeMagicalDamage(spell.getDamage() / 2);
    int wound = tmpHP - enemy.getCurrentHealth();

    std::cout << enemy.getName() << " -" << wound << " HP (" << enemy.getCurrentHealth() << "/" << enemy.getMaxHealth() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;
}

void IHealer::useHealingSpell(IUnit& other, IHealingSpell& spell)
{
    std::cout << this->getName() << " using a '" << spell.getName() << "' to the " << other.getName() << std::endl;

    if ( this->getCurrentMana() < spell.getCoast()) {
        std::cout << "Not anoгпh mana for the spell" << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    std::cout << "Mana: -" << spell.getCoast() << " (" << this->getCurrentMana() << "/" << this->getMaxMana() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;

    if (!other.isAlive()) {
        std::cout << "... but he is dead." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int tmpHP = other.getCurrentHealth();

    other.healing(spell.getCoast());
    this->m_currentMana -= spell.getCoast();
    int restoredHP = other.getCurrentHealth() - tmpHP;

    std::cout << other.getName() << " restored " << restoredHP << " HP (" << other.getCurrentHealth() << "/" << other.getMaxHealth() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;
}