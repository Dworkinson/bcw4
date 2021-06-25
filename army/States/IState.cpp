#include "IState.h"

IState::IState(const std::string& stateName, int HP, int damage, bool isUndead)
    : m_stateName(stateName)
    , m_currentHealth(HP)
    , m_maxHealth(HP)
    , m_damage(damage)
    , m_isUndead(isUndead)
{
}

IState::~IState() = default;

const std::string IState::getStateName()
{
    return this->m_stateName;
}

const int IState::getMaxHealth()
{
    return this->m_maxHealth;
}

const int IState::getCurrentHealth()
{
    return this->m_currentHealth;
}

const int IState::getDamage()
{
    return this->m_damage;
}

const bool IState::getIsUndead()
{
    return this->m_isUndead;
}

void IState::setCurrentHealth(int HP)
{
    this->m_currentHealth = HP;
}

const void IState::printState()
{
    std::cout << "------------------" << std::endl;
    std::cout << "State: " << getStateName() << std::endl;
    std::cout << "\tHP: " << getCurrentHealth() << "/" << getMaxHealth() << std::endl;
    std::cout << "\tDamage: " << getDamage() << std::endl;
    if (getIsUndead()) {
        std::cout << "\tUNDEAD" << std::endl;
    }
}
