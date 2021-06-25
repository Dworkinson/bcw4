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
    std::unique_ptr<Soldier> soldier1 = std::make_unique<Soldier>();
    std::unique_ptr<Rogue> rogue = std::make_unique<Rogue>();
    std::unique_ptr<Vampire> vampire = std::make_unique<Vampire>();
    std::unique_ptr<Werewolf> werewolf = std::make_unique<Werewolf>();
    std::unique_ptr<Berserker> berserker = std::make_unique<Berserker>();

    std::unique_ptr<Healer> healer = std::make_unique<Healer>();
    std::unique_ptr<Wizard> wizard = std::make_unique<Wizard>();
    std::unique_ptr<Priest> priest = std::make_unique<Priest>();
    std::unique_ptr<Warlock> warlock = std::make_unique<Warlock>();
    std::unique_ptr<Necromancer> necromancer = std::make_unique<Necromancer>();

    return 0;
}
