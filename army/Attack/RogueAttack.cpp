#include "RogueAttack.h"

RogueAttack::RogueAttack() = default;
RogueAttack::~RogueAttack() = default;

void RogueAttack::attacking(IUnit& unit, IUnit& enemy)
{
    std::cout << unit.getName() << " attacking -> " << enemy.getName() << std::endl;
    if (!enemy.isAlive()) {
        std::cout << "... but he is already dead." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int damage = unit.getDamage();

    enemy.takeDamage(damage);
    if (!enemy.isAlive()) {

        std::cout << " and killing him." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    std::cout << enemy.getName() << " -" << damage << " HP (" << enemy.getCurrentHealth() << "/" << enemy.getMaxHealth() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;
}