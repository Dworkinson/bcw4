#pragma once

#include "../Units/Soldier.h"
#include "../Units/Rogue.h"
#include "../Units/Vampire.h"
#include "../Units/Berserker.h"

class Attack
{
protected:
    Attack();
    Attack(const Attack& );
    Attack& operator=( Attack& );

public:
    static Attack &getInstance()
    {
        static Attack attack;
        return attack;
    }

    ~Attack();

    void attacking(IUnit& unit, IUnit& enemy);
    void attacking(Rogue& rogue, IUnit& enemy);
    void attacking(Vampire& vampire, IUnit& enemy);

    void counterAttack(IUnit& unit, IUnit& enemy);
    void counterAttack(Vampire& vampire, IUnit& enemy);
};
