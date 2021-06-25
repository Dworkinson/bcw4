#include "SpellCasterState.h"

SpellCasterState::SpellCasterState(const std::string& stateName, int HP, int damage, bool isUndead, int mana) : IState(stateName, HP, damage, isUndead)
    , m_maxMana(mana)
    , m_currentMana(mana)
{
}

SpellCasterState::~SpellCasterState(){}

const int SpellCasterState::getMaxMana()
{
    return this->m_currentMana;
}
const int SpellCasterState::getCurrentMana()
{
    return this->m_maxMana;
}

void SpellCasterState::setCurrentMana(int mana)
{
    this->m_currentMana = mana;
}

const void SpellCasterState::printState()
{
    IState::printState();
    std::cout << "\tMana: " << getCurrentMana() << "/" << getMaxMana() << std::endl;

}