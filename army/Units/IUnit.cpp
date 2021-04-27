#include "IUnit.h"

IUnit::IUnit(const std::string& name, int hp, int damage, std::unique_ptr<IState> state)
    : m_name(name)
    , m_maxHealth(hp)
    , m_currentHealth(hp)
    , m_damage(damage)
{
    this->swichToState(std::move(state));
}

IUnit::~IUnit() = default;

void IUnit::swichToState(std::unique_ptr<IState> state)
{
    this->m_state = std::move(state);
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

bool IUnit::isAlive()
{
    return this->getCurrentHealth() > 0;
}

void IUnit::takeDamage(int damage)
{
    this->m_currentHealth -= damage;
    if ( this->m_currentHealth < 0 ) {
        this->m_currentHealth = 0;
    }
}

void IUnit::healing(int hp)
{
    this->m_currentHealth += hp;
    if ( this->m_currentHealth > this->m_maxHealth ) {
        this->m_currentHealth = this->m_maxHealth;
    }
}

void IUnit::print()
{
    std::cout << "==================" << std::endl;
    std::cout << this->getName() << "(" << m_state->getState() << ")" << std::endl;
    std::cout << "\tHP: " << this->getCurrentHealth() << " / " << this->getMaxHealth() << std::endl;
    std::cout << "\tDamage: " << this->getDamage() << std::endl;
    std::cout << "==================" << std::endl;
}
