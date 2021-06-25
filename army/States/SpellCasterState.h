#pragma once

#include <iostream>

#include "IState.h"
#include "Properties.h"

class SpellCasterState : public IState
{
private:
    int m_maxMana;
    int m_currentMana;

public:
    SpellCasterState(const std::string& stateName, int HP, int damage, bool isUndead, int mana);
    virtual ~SpellCasterState();

    virtual const int getMaxMana();
    virtual const int getCurrentMana();

    void setCurrentMana(int mana);

    virtual const void printState() override;
};
