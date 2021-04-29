#pragma once

#include <iostream>

class IUnit;

class IState
{
protected:
    std::string m_state;

public:
    IState(const std::string& state);
    ~IState();

    virtual void useAbility(IUnit& enemy) = 0;
    const std::string getState();
};