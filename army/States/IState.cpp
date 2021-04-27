#include "IState.h"

IState::IState(const std::string& state) : m_state(state)
{
}

IState::~IState() = default;

const std::string IState::getState()
{
    return this->m_state;
}
