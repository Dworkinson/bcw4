#include "IUnit.h"
#include "../Attack/BaseAttack.h"

IUnit::IUnit(const std::string& name, std::unique_ptr<IState> state, std::unique_ptr<BaseAttack> attack)
{
    this->m_name = name;
    this->swichToState(std::move(state));
    this->swichAttack(std::move(attack));
    this->m_observers = std::make_unique<std::set<IUnit*>>();
}

IUnit::~IUnit() = default;

void IUnit::swichToState(std::unique_ptr<IState> state)
{
    this->m_state = std::move(state);
}

void IUnit::swichAttack(std::unique_ptr<BaseAttack> attack)
{
    this->m_attack = std::move(attack);
}

const std::string IUnit::getName()
{
    return this->m_name;
}

bool IUnit::isAlive()
{
    return m_state->getCurrentHealth() > 0;
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
    int tempHP = m_state->getCurrentHealth() - damage;
    if ( tempHP <= 0 ) {
        m_state->setCurrentHealth(0);

        if ( m_observers->empty() ) { return; }

        typename std::set<IUnit*>::iterator it = m_observers->begin();
        for ( int i = m_observers->size(); i > 0; it++, i-- ) {
        (*it)->healing(m_state->getMaxHealth() * 0.25);
        (*it)->detachEnemy(this);
        detachNecromancer(*it);
        }
        return;
    }
    m_state->setCurrentHealth(tempHP);
}

void IUnit::healing(int hp)
{
    int tempHP = m_state->getCurrentHealth() + hp;
    if ( tempHP > m_state->getCurrentHealth() ) {
        m_state->setCurrentHealth(m_state->getMaxHealth());
        return;
    }
    m_state->setCurrentHealth(tempHP);
    std::cout << this->getName() << " restored " << hp << " HP (" << m_state->getCurrentHealth() << "/" << m_state->getMaxHealth() << ")" << std::endl;
}

void IUnit::takeMagicalDamage(int mDamage)
{
    this->takeDamage(mDamage);
}

void IUnit::print()
{
    std::cout << "==================" << std::endl;
    std::cout << this->getName() << std::endl;
    m_state->printState();
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
