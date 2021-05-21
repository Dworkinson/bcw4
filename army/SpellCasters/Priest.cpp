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
    fireball            = std::make_unique<Fireball>();
    firestorm           = std::make_unique<Firestorm>();

    lightRestoration    = std::make_unique<LightRestoration>();
    restoration         = std::make_unique<Restoration>();
    greatRestoration    = std::make_unique<GreatRestoration>();
    wellness            = std::make_unique<Wellness>();
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

    this->m_currentMana -= spell.getCoast();

    std::cout << "Mana: -" << spell.getCoast() << "(" << this->getCurrentMana() << "/" << this->getMaxMana() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;

    if (!enemy.isAlive()) {
        std::cout << "... enemy is already dead." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int tmpHP = enemy.getCurrentHealth();

    if ( enemy.isUndead() ) {
        enemy.takeMagicalDamage(spell.getDamage() * 2);
    } else {
        enemy.takeMagicalDamage(spell.getDamage());
    }

    int wound = tmpHP - enemy.getCurrentHealth();

    std::cout << enemy.getName() << " -" << wound << " HP (" << enemy.getCurrentHealth() << "/" << enemy.getMaxHealth() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;
}
