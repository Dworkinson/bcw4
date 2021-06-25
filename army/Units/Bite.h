#pragma once

#include "IUnit.h"
#include "../States/VampireState.h"
#include "../States/WolfState.h"

class Bite {
public:
    void turnTo(IUnit& unit, IUnit& enemy)
    {
        if ( dynamic_cast<VampireState*>(enemy.m_state.get()) || dynamic_cast<WolfState*>(enemy.m_state.get())) {
            std::cout << unit.getName() << " can't bite " << enemy.getName() << std::endl;
            std::cout << "---------------------" << std::endl;
        } else {
            int wound = enemy.m_state->getMaxHealth() - enemy.m_state->getCurrentHealth();

            if ( dynamic_cast<VampireState*>(unit.m_state.get())) {
                enemy.swichToState(std::make_unique<WolfState>());
            } else {
                enemy.swichToState(std::make_unique<VampireState>());
            }

            int tempHP = enemy.m_state->getMaxHealth() - wound;
            enemy.m_state->setCurrentHealth(tempHP);

            std::cout << unit.getName() 
                        << " transformed " << enemy.getName()
                        << " to the " << unit.m_state->getStateName() << std::endl;
            std::cout << "---------------------" << std::endl;
        }
    }
};