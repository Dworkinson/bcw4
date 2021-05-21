#include "IUnit.h"
#include "../Attack/IAttack.h"

IUnit::IUnit(const std::string& name, int hp, int damage, bool isUndead, std::unique_ptr<IState> state, std::unique_ptr<IAttack> attack)
    : m_name(name)
    , m_maxHealth(hp)
    , m_currentHealth(hp)
    , m_damage(damage)
    , m_isUndead(isUndead)
{
    this->swichToState(std::move(state));
    this->swichAttack(std::move(attack));
    this->m_observers = std::make_unique<std::set<IUnit*>>();
}

IUnit::~IUnit() = default;

void IUnit::swichToState(std::unique_ptr<IState> state)
{
    this->m_state = std::move(state);
}

void IUnit::swichAttack(std::unique_ptr<IAttack> attack)
{
    this->m_attack = std::move(attack);
}

const std::string IUnit::getName()
{
    return this->m_name;
}

const int IUnit::getCurrentHealth()
{
    return this->m_currentHealth;
}

const int IUnit::getMaxHealth()
{
    return this->m_maxHealth;
}

const int IUnit::getDamage()
{
    return this->m_damage;
}

void IUnit::setCurrentHealth(int hp)
{
    this->m_currentHealth = hp;
}

void IUnit::setMaxHealth(int hp)
{
    this->m_maxHealth = hp;
}

void IUnit::setDamage(int damage)
{
    this->m_damage = damage;
}

void IUnit::setStatus(bool isUndead)
{
    this->m_isUndead = isUndead;
}

bool IUnit::isAlive()
{
    return this->getCurrentHealth() > 0;
}

void IUnit::attacking(IUnit& enemy)
{
    m_attack->attacking(*this, enemy);
}

void IUnit::counterAttacking(IUnit& enemy)
{
    m_attack->counterAttacking(*this, enemy);
}

void IUnit::takeDamage(int damage)
{
    this->m_currentHealth -= damage;
    if ( this->m_currentHealth < 0 ) {
        this->m_currentHealth = 0;

        if ( m_observers->empty() ) { return; }

        typename std::set<IUnit*>::iterator it = m_observers->begin();
        for ( int i = m_observers->size(); i > 0; it++, i-- ) {
        (*it)->healing(this->getMaxHealth() * 0.25);
        (*it)->detachEnemy(this);
        detachNecromancer(*it);
        }
    }
}

void IUnit::healing(int hp)
{
    this->m_currentHealth += hp;
    if ( this->m_currentHealth > this->m_maxHealth ) {
        this->m_currentHealth = this->m_maxHealth;
    }
    std::cout << this->getName() << " restored " << hp << " HP (" << this->getCurrentHealth() << "/" << this->getMaxHealth() << ")" << std::endl;
}

void IUnit::takeMagicalDamage(int mDamage)
{
    this->m_currentHealth -= mDamage;
    if ( this-> m_currentHealth < 0) {
        this->m_currentHealth = 0;

        if ( m_observers->empty() ) { return; }

        typename std::set<IUnit*>::iterator it = m_observers->begin();
        for ( int i = m_observers->size(); i > 0; it++, i-- ) {
        (*it)->healing(this->getMaxHealth() * 0.25);
        (*it)->detachEnemy(this);
        detachNecromancer(*it);
        }
    }
}

bool IUnit::isUndead()
{
    return this->m_isUndead;
}

void IUnit::print()
{
    std::cout << "==================" << std::endl;
    std::cout << this->getName() << "(" << m_state->getState() << ")" << std::endl;
    std::cout << "\tHP: " << this->getCurrentHealth() << " / " << this->getMaxHealth() << std::endl;
    std::cout << "\tDamage: " << this->getDamage() << std::endl;
    if ( this->isUndead() ) {
        std::cout << "\tUNDEAD" << std::endl;
    }
    std::cout << "==================" << std::endl;
}

void IUnit::attachNecromancer(IUnit *enemy)
{
    this->m_observers->emplace(enemy);
}

void IUnit::detachNecromancer(IUnit *enemy)
{
    this->m_observers->erase(enemy);
}

void IUnit::attachEnemy(IUnit *enemy){ return; }
void IUnit::detachEnemy(IUnit *enemy){ return; }
