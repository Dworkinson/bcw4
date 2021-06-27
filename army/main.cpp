#include <iostream>
#include <memory>

#include "Units/Berserker.h"
#include "Units/Soldier.h"
#include "Units/Rogue.h"
#include "Units/Vampire.h"
#include "Units/Werewolf.h"

#include "Spellcasters/Wizard.h"
#include "Spellcasters/Healer.h"
#include "Spellcasters/Priest.h"
#include "Spellcasters/Warlock.h"
#include "Spellcasters/Necromancer.h"

int main(int argc, char const *argv[])
{
    std::unique_ptr<Soldier> soldier = std::make_unique<Soldier>();
    std::unique_ptr<Rogue> rogue = std::make_unique<Rogue>();
    std::unique_ptr<Vampire> vampire = std::make_unique<Vampire>();
    std::unique_ptr<Werewolf> werewolf = std::make_unique<Werewolf>();
    std::unique_ptr<Berserker> berserker = std::make_unique<Berserker>();

    std::unique_ptr<Healer> healer = std::make_unique<Healer>();
    std::unique_ptr<Wizard> wizard = std::make_unique<Wizard>();
    std::unique_ptr<Priest> priest = std::make_unique<Priest>();
    std::unique_ptr<Warlock> warlock = std::make_unique<Warlock>();
    std::unique_ptr<Necromancer> necromancer1 = std::make_unique<Necromancer>();
    std::unique_ptr<Necromancer> necromancer2 = std::make_unique<Necromancer>();
    std::unique_ptr<Necromancer> necromancer3 = std::make_unique<Necromancer>();
    std::unique_ptr<Necromancer> necromancer4 = std::make_unique<Necromancer>();

    soldier->print();
    necromancer1->attacking(*soldier);
    necromancer2->attacking(*soldier);
    necromancer3->attacking(*soldier);
    necromancer4->attacking(*soldier);
    necromancer1->print();
    necromancer2->print();
    necromancer3->print();
    necromancer4->print();

    rogue->attacking(*soldier);
    rogue->attacking(*soldier);
    rogue->attacking(*soldier);
    rogue->attacking(*soldier);
    rogue->attacking(*soldier);
    rogue->attacking(*soldier);
    rogue->attacking(*soldier);

    necromancer1->print();
    necromancer2->print();
    necromancer3->print();
    necromancer4->print();
    return 0;
}
