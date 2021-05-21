#include "Necromancer.h"

Necromancer::Necromancer() : IBattleMage("Necromancer"
                                , 60
                                , 2
                                , true
                                , std::unique_ptr<HumanState>(new HumanState())
                                , std::unique_ptr<MageAttack>(new MageAttack())
                                , "Battle mage"
                                , 60)
{
    fireball            = std::make_unique<Fireball>();
    firestorm           = std::make_unique<Firestorm>();

    lightRestoration    = std::make_unique<LightRestoration>();
    restoration         = std::make_unique<Restoration>();

    m_observables = std::make_unique<std::set<IUnit*>>();
}

Necromancer::~Necromancer() = default;

void Necromancer::takeDamage(int damage)
{
    this->m_currentHealth -= damage;
    if ( this->m_currentHealth < 0 ) {
        this->m_currentHealth = 0;

        if ( m_observers->empty() ) { return; }

        typename std::set<IUnit*>::iterator observer = m_observers->begin();
        for ( int i = m_observers->size(); i > 0; observer++, i-- ) {
        (*observer)->healing(this->getMaxHealth() * 0.25);
        (*observer)->detachEnemy(this);
        detachNecromancer(*observer);
        }

        typename std::set<IUnit*>::iterator observable = m_observables->begin();
        for ( int i = m_observables->size(); i > 0; observable++, i-- ) {
            (*observable)->detachNecromancer(this);
        }
    }
}

void Necromancer::attacking(IUnit& enemy)
{
    attachEnemy(&enemy);
    enemy.attachNecromancer(this);
    m_attack->attacking(*this, enemy);
}

void Necromancer::counterAttacking(IUnit& enemy)
{
    attachEnemy(&enemy);
    enemy.attachNecromancer(this);
    m_attack->counterAttacking(*this, enemy);
}

void Necromancer::useBattleSpell(IUnit& enemy, IBattleSpell& spell)
{
    std::cout << this->getName() << " using a '" << spell.getName() << "' to the " << enemy.getName() << std::endl;

    if ( this->getCurrentMana() < spell.getCoast()) {
        std::cout << "Not anoгпh mana for the spell" << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    this->m_currentMana -= spell.getCoast();
    attachEnemy(&enemy);
    enemy.attachNecromancer(this);

    std::cout << "Mana: -" << spell.getCoast() << " (" << this->getCurrentMana() << "/" << this->getMaxMana() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;

    if (!enemy.isAlive()) {
        std::cout << "... enemy is already dead." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int tmpHP = enemy.getCurrentHealth();

    enemy.takeMagicalDamage(spell.getDamage());
    int wound = tmpHP - enemy.getCurrentHealth();

    std::cout << enemy.getName() << " -" << wound << " HP (" << enemy.getCurrentHealth() << "/" << enemy.getMaxHealth() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;

}

void Necromancer::attachEnemy(IUnit *enemy)
{
    this->m_observables->emplace(enemy);
}

void Necromancer::detachEnemy(IUnit *enemy)
{
    this->m_observables->erase(enemy);
}
