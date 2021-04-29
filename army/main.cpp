#include <iostream>
#include <memory>

#include "Includes.h"

int main(int argc, char const *argv[])
{

    std::unique_ptr<Soldier> soldier = std::make_unique<Soldier>();
    std::unique_ptr<Rogue> rogue = std::make_unique<Rogue>();
    std::unique_ptr<Vampire> vampire = std::make_unique<Vampire>();
    std::unique_ptr<Werewolf> werewolf = std::make_unique<Werewolf>();
    std::unique_ptr<Berserker> berserker = std::make_unique<Berserker>();

    // soldier->print();
    rogue->print();
    // vampire->print();
    // berserker->print();
    werewolf->print();

    werewolf->attacking(*rogue);
    // werewolf->bite(*rogue);
    werewolf->transform();
    werewolf->attacking(*rogue);

    werewolf->bite(*rogue);
    werewolf->print();
    rogue->print();

    werewolf->transform();
    werewolf->print();

    // soldier->attacking(*rogue);
    // rogue->attacking(*soldier);
    return 0;
}
