#include "Werewolf.h"

Werewolf::Werewolf() : IUnit("Werewolf", 120, 10, std::unique_ptr<IState>(new HumanState()), std::unique_ptr<WerewolfAttack>(new WerewolfAttack()))
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
    if ( dynamic_cast<HumanState*>(this->m_state.get())) {
        this->swichToState(std::make_unique<WolfState>());
        this->wolfForm = true;
        std::cout << this->getName() << " transformed to the wolf." << std::endl;
        std::cout << "---------------------" << std::endl;

    } else {
        this->swichToState(std::make_unique<HumanState>());
        this->wolfForm = false;
        std::cout << this->getName() << " transformed to the human." << std::endl;
        std::cout << "---------------------" << std::endl;
    }
}

void Werewolf::bite(IUnit& enemy)
{
    if ( !wolfForm ) { return; }
    if ( dynamic_cast<HumanState*>(enemy.m_state.get())) {
        this->m_state->useAbility(enemy);
        std::cout << this->getName() << " transformed " << enemy.getName() << " to the wolf." << std::endl;
        std::cout << "---------------------" << std::endl;
    } else {
        std::cout << this->getName() << " can't bite " << enemy.getName() << std::endl;
    }
}
