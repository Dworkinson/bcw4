// #ifndef IBATTLESPELL_CPP
// #define IBATTLESPELL_CPP
#pragma once

#include <iostream>

class IBattleSpell
{
public:
    std::string m_name;
    int m_coast;
    int m_damage;

    IBattleSpell(const std::string& name, int coast, int damage)
    : m_name(name)
    , m_coast(coast)
    , m_damage(damage)
    {
    }

    virtual ~IBattleSpell() = default;

    const std::string   getName()   { return this->m_name; }
    const int           getCoast()  { return this->m_coast; }
    const int           getDamage() { return this->m_damage; }
};

// #endif
