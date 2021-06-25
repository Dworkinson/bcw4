#pragma once

#include "IUnit.h"
#include "../States/HumanState.h"
#include "../States/WolfState.h"
#include "../Attack/BaseAttack.h"
#include "Bite.h"

class Werewolf : public IUnit, public Bite
{
private:
    bool wolfForm;

    void setMaxHealth(int hp);
    void setDamage(int damage);

public:
    Werewolf();
    ~Werewolf();

    void transform();
    void bite(IUnit& enemy);
};
