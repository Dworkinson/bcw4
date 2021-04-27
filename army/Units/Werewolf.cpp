#include "Werewolf.h"

Werewolf::Werewolf() : IUnit("Werewolf", 120, 10, std::unique_ptr<IState>(new HumanState()))
{
    this->wolfForm = false;
}

Werewolf::~Werewolf() = default;

void Werewolf::setMaxHealth(int hp)
{
    this->m_maxHealth = hp;
}

void Werewolf::setDamage(int damage)
{
    this->m_damage = damage;
}

void Werewolf::swichToWolf()
{
    this->setMaxHealth(130);
    this->setDamage(20);
    this->wolfForm = true; // ??????
}

// void Werewolf::print()
// {
//     std::cout << "==================" << std::endl;
//     std::cout << this->getName() << std::endl;
//     std::cout << "\tHP: " << this->getCurrentHealth() << " / " << this->getMaxHealth() << std::endl;
//     std::cout << "\tDamage: " << this->getDamage() << std::endl;
//     std::cout << "==================" << std::endl;
// }