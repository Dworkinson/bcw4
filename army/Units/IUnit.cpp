#include "IUnit.h"
#include "../Attack/IAttack.h"

IUnit::IUnit(const std::string& name, int hp, int damage, std::unique_ptr<IState> state, std::unique_ptr<IAttack> attack)
    : m_name(name)
    , m_maxHealth(hp)
    , m_currentHealth(hp)
    , m_damage(damage)
{
    this->swichToState(std::move(state));
    this->swichAttack(std::move(attack));
}

IUnit::~IUnit() = default;

void IUnit::swichToState(std::unique_ptr<IState> state)
{
    int wound =  this->getMaxHealth() - this->getCurrentHealth();
    int tmpMaxHealth = this->getMaxHealth();
    int tmpDamage = this->getDamage();

    this->m_state = std::move(state);

    if ( dynamic_cast<HumanState*>(this->m_state.get()) ) {//
        this->setMaxHealth(tmpMaxHealth);
        this->setCurrentHealth(this->getMaxHealth() - wound);
        this->setDamage(tmpDamage);
        return;
    }

    if ( dynamic_cast<WolfState*>(this->m_state.get()) ) {// больший урон от магии у волка
        this->setMaxHealth(150);
        this->setCurrentHealth(this->getMaxHealth() - wound);
        this->setDamage(20);
        return;
    }

    if ( dynamic_cast<VampireState*>(this->m_state.get()) ) {//vampire is UNDEAD
        this->setMaxHealth(100);
        this->setCurrentHealth(this->getMaxHealth() - wound);
        this->setDamage(8);
        return;
    }
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
    }
}

void IUnit::healing(int hp)
{
    this->m_currentHealth += hp;
    if ( this->m_currentHealth > this->m_maxHealth ) {
        this->m_currentHealth = this->m_maxHealth;
    }
    std::cout << this->getName() << " resored " << hp << " HP (" << this->getCurrentHealth() << "/" << this->getMaxHealth() << ")" << std::endl;
}

void IUnit::print()
{
    std::cout << "==================" << std::endl;
    std::cout << this->getName() << "(" << m_state->getState() << ")" << std::endl;
    std::cout << "\tHP: " << this->getCurrentHealth() << " / " << this->getMaxHealth() << std::endl;
    std::cout << "\tDamage: " << this->getDamage() << std::endl;
    std::cout << "==================" << std::endl;
}
