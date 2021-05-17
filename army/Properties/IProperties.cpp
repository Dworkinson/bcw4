#include "IProperties.h"

IProperties::IProperties(int hp, int damage)
    : currentHealth(hp)
    , maxHealth(hp)
    , damage(damage)
{}

IProperties::~IProperties(){}

const int IProperties::getCurrentHealth()
{
    return this->currentHealth;
}

const int IProperties::getMaxHealth()
{
    return this->maxHealth;
}

const int IProperties::getDamage()
{
    return this->damage;
}

void IProperties::setCurrentHealth(int hp)
{
    this->currentHealth = hp;
}

void IProperties::setMaxHealth(int hp)
{
    this->maxHealth = hp;
}

void IProperties::setDamage(int damage)
{
    this->damage = damage;
}

