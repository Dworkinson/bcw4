#pragma once

#include "IUnit.h"
#include "../States/HumanState.h"
#include "../States/WolfState.h"

class Werewolf : public IUnit
{
private:
    bool wolfForm; // ????

    void setMaxHealth(int hp);
    void setDamage(int damage);

public:
    Werewolf();
    ~Werewolf();

    void swichToWolf();
    void swichToHuman();

    // void print() override; 
};
