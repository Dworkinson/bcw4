#include "Priest.h"

Priest::Priest() : IHealer("Priest"
                                , 60
                                , 4
                                , false
                                , std::unique_ptr<HumanState>(new HumanState())
                                , std::unique_ptr<PriestAttack>(new PriestAttack())
                                , "Healer"
                                , 130)
{
    fireball = std::make_unique<Fireball>();
    lightRestoration = std::make_unique<LightRestoration>();
}

Priest::~Priest() = default;

void Priest::useBattleSpell(IUnit& enemy, IBattleSpell& spell)
{
    std::cout << this->getName() << " using a '" << spell.getName() << "' to the " << enemy.getName() << std::endl;

    if ( this->getCurrentMana() < spell.getCoast()) {
        std::cout << "Not anoгпh mana for the spell" << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int tmpHP = enemy.getCurrentHealth();

    if ( enemy.isUndead() ) {
    enemy.takeMagicalDamage(spell.getDamage() * 2);
    this->m_currentMana -= spell.getCoast();
    }

    if (!enemy.isAlive()) {
        std::cout << "... but he is already dead." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

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
