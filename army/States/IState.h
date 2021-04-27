#pragma once

#include <iostream>

// #include "../Units/IUnit.h"

class IState
{
protected:
    std::string m_state;

public:
    IState(const std::string& state);
    ~IState();

    // virtual void ability(IUnit& enemy) = 0;
    const std::string getState();
};