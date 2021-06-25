#include "VampireAttack.h"

VampireAttack::VampireAttack() = default;
VampireAttack::~VampireAttack() = default;

void VampireAttack::attacking(IUnit& unit, IUnit& enemy)
{
    std::cout << unit.getName() << " attacking -> " << enemy.getName() << std::endl;
    if (!enemy.isAlive()) {
        std::cout << "... but he is already dead." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int damage = unit.m_state->getDamage();

    if ( enemy.m_state->getCurrentHealth() < damage ) {
        std::cout << "(vampirism) ";
        unit.healing(enemy.m_state->getCurrentHealth());
        enemy.takeDamage(damage);
        std::cout << "... and killing him." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    enemy.takeDamage(damage);

    std::cout << "(vampirism) ";
    unit.healing(damage);

    std::cout << enemy.getName() << " -" << damage << " HP (" << enemy.m_state->getCurrentHealth() << "/" << enemy.m_state->getMaxHealth() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;

    enemy.counterAttacking(unit);
}

void VampireAttack::counterAttacking(IUnit& unit, IUnit& enemy)
{
    std::cout << unit.getName() << " counterattacing -> " << enemy.getName() << std::endl;

    int damage = unit.m_state->getDamage() / 2;
    if ( enemy.m_state->getCurrentHealth() < damage ) {
        std::cout << "(vampirism) ";
        unit.healing(enemy.m_state->getCurrentHealth());
        enemy.takeDamage(damage);
        std::cout << "... and killing him." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    enemy.takeDamage(damage);
    std::cout << "(vampirism) ";
    unit.healing(damage);

    std::cout << enemy.getName() << " -" << damage << " HP (" << enemy.m_state->getCurrentHealth() << "/" << enemy.m_state->getMaxHealth() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;
}
