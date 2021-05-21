#include "Vampire.h"

Vampire::Vampire() : IUnit("Vampire", 100, 8, true, std::unique_ptr<VampireState>(new VampireState()), std::unique_ptr<VampireAttack>(new VampireAttack()))
{
}

Vampire::~Vampire() = default;

void Vampire::bite(IUnit& enemy)
{
    int wound = enemy.getMaxHealth() - enemy.getCurrentHealth();

    if ( dynamic_cast<HumanState*>(enemy.m_state.get())) {
        this->m_state->useAbility(enemy);
        enemy.setMaxHealth(100);
        enemy.setCurrentHealth(100 - wound);
        enemy.setDamage(8);
        enemy.setStatus(true);

        std::cout << this->getName() << " transformed " << enemy.getName() << " to the wolf." << std::endl;
        std::cout << "---------------------" << std::endl;
    } else {
        std::cout << this->getName() << " can't bite " << enemy.getName() << std::endl;
    }
}
