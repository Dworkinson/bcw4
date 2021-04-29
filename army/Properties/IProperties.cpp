#include "IProperties.h"

IProperties::IProperties(int hp, int damage)
    : currentHealth(hp)
    , maxHealth(hp)
    , damage(damage)
{}

IProperties::~IProperties(){}

int IProperties::getCurrentHealth()
{
    return this->currentHealth;
}

int IProperties::getMaxHealth()
{
    return this->maxHealth;
}

int IProperties::getDamage()
{
    return this->damage;
}
