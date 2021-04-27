#include <iostream>
#include <memory>

// #include "Attack.h"
// // #include "IUnit.h"
// // #include "IState.h"

// #include "HumanState.h"
// #include  "WolfState.h"
// #include "Soldier.h"
// #include "Rogue.h"
// #include "Vampire.h"
// #include "Werewolf.h"

#include "Includes.h"

int main(int argc, char const *argv[])
{
    Attack &attack = Attack::getInstance();

    std::unique_ptr<Soldier> soldier = std::make_unique<Soldier>();
    std::unique_ptr<Rogue> rogue = std::make_unique<Rogue>();
    // std::unique_ptr<Vampire> vampire = std::make_unique<Vampire>();
    // std::unique_ptr<Werewolf> werewolf = std::make_unique<Werewolf>();

    soldier->print();
    rogue->print();

    // attack.attacking(*vampire, *soldier);
    // attack.attacking(*soldier, *vampire);

    attack.attacking(*soldier, *rogue);
    attack.attacking(*soldier, *rogue);
    attack.attacking(*soldier, *rogue);
    attack.attacking(*soldier, *rogue);
    attack.attacking(*soldier, *rogue);
    attack.attacking(*soldier, *rogue);
    attack.attacking(*soldier, *rogue);
    attack.attacking(*soldier, *rogue);

    soldier->print();
    rogue->print();

    attack.attacking(*soldier, *rogue);

    soldier->print();
    rogue->print();
    // vampire->print();

    // soldier2->attack(*soldier);
    // soldier2->attack(*soldier);

    // soldier->print();
    // soldier2->print();
    return 0;
}
