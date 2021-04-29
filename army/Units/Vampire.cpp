#include "Vampire.h"

Vampire::Vampire() : IUnit("Vampire", 100, 8, std::unique_ptr<IState>(new VampireState()), std::unique_ptr<VampireAttack>(new VampireAttack()))
{
}

Vampire::~Vampire() = default;

void Vampire::bite(IUnit& enemy)
{
    if ( dynamic_cast<HumanState*>(enemy.m_state.get())) {
        this->m_state->useAbility(enemy);
        std::cout << this->getName() << " transformed " << enemy.getName() << " to the wolf." << std::endl;
        std::cout << "---------------------" << std::endl;
    } else {
        std::cout << this->getName() << " can't bite " << enemy.getName() << std::endl;
    }
}
