#include "PriestAttack.h"

PriestAttack::PriestAttack() = default;
PriestAttack::~PriestAttack() = default;

void PriestAttack::attacking(IUnit& unit, IUnit& enemy)
{
    std::cout << unit.getName() << " attacking -> " << enemy.getName() << std::endl;
    if (!enemy.isAlive()) {
        std::cout << "... but he is already dead." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int damage = unit.m_state->getDamage();

    if ( enemy.m_state->getIsUndead() ) {
        damage *= 2;
    }

    enemy.takeDamage(damage);
    if (!enemy.isAlive()) {

        std::cout << " and killing him." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    std::cout << enemy.getName() << " -" << damage << " HP (" << enemy.m_state->getCurrentHealth() << "/" << enemy.m_state->getMaxHealth() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;

    enemy.counterAttacking(unit);
}

void PriestAttack::counterAttacking(IUnit& unit, IUnit& enemy)
{
    std::cout << unit.getName() << " counterattacing -> " << enemy.getName() << std::endl;

    int damage = unit.m_state->getDamage() / 2;
    if ( enemy.m_state->getIsUndead() ) {
        damage *= 2;
    }

    enemy.takeDamage(damage);
    if (!enemy.isAlive()) {
        std::cout << "... and killed him." << std::endl;
        std::cout << "---------------------" << std::endl;
    }

    std::cout << enemy.getName() << " -" << damage << " HP (" << enemy.m_state->getCurrentHealth() << "/" << enemy.m_state->getMaxHealth() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;
}
