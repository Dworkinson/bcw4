#include "Attack.h"

Attack::Attack(){}

Attack::~Attack(){}

void Attack::attacking(IUnit& unit, IUnit& enemy)
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

    counterAttack(enemy, unit);
}


void Attack::attacking(Rogue& rogue, IUnit& enemy)
{
    std::cout << rogue.getName() << " attacking -> " << enemy.getName() << std::endl;
    if (!enemy.isAlive()) {
        std::cout << "... but he is already dead." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int damage = rogue.getDamage();

    enemy.takeDamage(damage);
    if (!enemy.isAlive()) {
        std::cout << "... and killing him." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    std::cout << enemy.getName() << " -" << damage << " HP (" << enemy.getCurrentHealth() << "/" << enemy.getMaxHealth() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;
}

void Attack::attacking(Vampire& vampire, IUnit& enemy)
{
    std::cout << vampire.getName() << " attacking -> " << enemy.getName() << std::endl;
    if (!enemy.isAlive()) {
        std::cout << "... but he is already dead." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int damage = vampire.getDamage();
    int healPoints = 
    enemy.takeDamage(damage);
    // vampire.healing(damage / 2);
    if (!enemy.isAlive()) {
        
        std::cout << "... and killing him." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    std::cout << enemy.getName() << " -" << damage << " HP (" << enemy.getCurrentHealth() << "/" << enemy.getMaxHealth() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;

    counterAttack(enemy, vampire);

    // std::cout << vampire.getName() << " attacking -> " << enemy.getName() << std::endl;
    // if (!enemy.isAlive(enemy)) {
    //     std::cout << ", but he is already dead." << std::endl;
    //     std::cout << "---------------------" << std::endl;
    //     return;
    // }

    // int damage = vampire.getDamage();
    // if (enemy.getCurrentHealth() < damage) {
    //     if ( enemy.getCurrentHealth() < vampire.getVampirePower() ) {
    //         vampire.healing(enemy.getCurrentHealth());
    //         std::cout << vampire.getName() << " took " << damage << " HP (vampirism). (" 
    //                                                     << enemy.getCurrentHealth() << "/" << enemy.getMaxHealth() << ")" << std::endl;
    //     }
    //     enemy.setCurrentHealth(0);
    //     std::cout << " and killed him." << std::endl;
    //     std::cout << "---------------------" << std::endl;
    // }

    // enemy.takeDamage(damage);
    // vampire.healing(vampire.getVampirePower());
    // std::cout << enemy.getName() << " -" << damage << " HP(" 
    //                                                 << enemy.getCurrentHealth() << "/" << enemy.getMaxHealth() << ")" << std::endl;
    // std::cout << vampire.getName() << " restored " << vampire.getVampirePower() << " HP (vampirism). (" 
    //                                                 << vampire.getCurrentHealth() << "/" << vampire.getMaxHealth() << ")" << std::endl;
    // std::cout << "---------------------" << std::endl;

    // counterAttack(enemy, vampire);
}

void Attack::counterAttack(IUnit& unit, IUnit& enemy)
{
    std::cout << unit.getName() << " counterattacing -> " << enemy.getName() << std::endl;

    int damage = unit.getDamage() / 2;

    enemy.takeDamage(damage);
    if (!enemy.isAlive()) {
        std::cout << "... and killed him." << std::endl;
        std::cout << "---------------------" << std::endl;
    }

    std::cout << enemy.getName() << " -" << damage << " HP (" << enemy.getCurrentHealth() 
                                                            << "/" << enemy.getMaxHealth() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;
}

void counterAttack(Vampire& vampire, IUnit& enemy)
{
    // std::cout << vampire.getName() << " counterattacing -> " << enemy.getName() << std::endl;
    // int damage = vampire.getDamage();
    // if (enemy.getCurrentHealth() < damage) {
    //     if ( enemy.getCurrentHealth() < vampire.getVampirePower() ) {
    //         vampire.healing(enemy.getCurrentHealth());
    //         std::cout << vampire.getName() << " restored " << enemy.getCurrentHealth() << " HP (vampirism)." << std::endl;
    //     }
    //     enemy.setCurrentHealth(0);
    //     std::cout << " and killed him." << std::endl;
    //     std::cout << "---------------------" << std::endl;
    // }

    // enemy.takeDamage(damage);
    // std::cout << enemy.getName() << " -" << damage << " HP (" << enemy.getCurrentHealth() 
    //                                                         << "/" << enemy.getMaxHealth() << ")" << std::endl;
    // std::cout << "---------------------" << std::endl;
}