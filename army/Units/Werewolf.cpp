#include "Werewolf.h"

Werewolf::Werewolf() : IUnit("Werewolf", 120, 10, false, std::unique_ptr<HumanState>(new HumanState()), std::unique_ptr<WerewolfAttack>(new WerewolfAttack()))
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

void Werewolf::transform()
{
    int wound = this->getMaxHealth() - this->getCurrentHealth();

    if ( dynamic_cast<HumanState*>(this->m_state.get())) {
        this->swichToState(std::make_unique<WolfState>());
        this->wolfForm = true;
        this->setMaxHealth(150);
        this->setCurrentHealth(150 - wound);
        this->setDamage(20);

        std::cout << this->getName() << " transformed to the wolf." << std::endl;
        std::cout << "---------------------" << std::endl;

    } else {
        this->swichToState(std::make_unique<HumanState>());
        this->wolfForm = false;
        this->setMaxHealth(120);
        this->setCurrentHealth(120 - wound);
        this->setDamage(10);

        std::cout << this->getName() << " transformed to the human." << std::endl;
        std::cout << "---------------------" << std::endl;
    }
}

void Werewolf::bite(IUnit& enemy)
{
    if ( !wolfForm ) { return; }

    int wound = enemy.getMaxHealth() - enemy.getCurrentHealth();

    if ( dynamic_cast<HumanState*>(enemy.m_state.get())) {
        this->m_state->useAbility(enemy);
        enemy.setMaxHealth(150);
        enemy.setCurrentHealth(150 - wound);
        enemy.setDamage(20);

        std::cout << this->getName() << " transformed " << enemy.getName() << " to the wolf." << std::endl;
        std::cout << "---------------------" << std::endl;
    } else {
        std::cout << this->getName() << " can't bite " << enemy.getName() << std::endl;
    }
}
