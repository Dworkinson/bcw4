// #ifndef IHEALINGSPELL_CPP
// #define IHEALINGSPELL_CPP
#pragma once

#include <iostream>

class IHealingSpell
{
public:
	std::string m_name;
	int m_coast;
	int m_power;

	IHealingSpell(const std::string& name, int coast, int power)
	: m_name(name)
	, m_coast(coast)
	, m_power(power)
	{
	}

	virtual ~IHealingSpell() = default;

	const std::string 	getName() 	{ return this->m_name; }
	const int 			getCoast() 	{ return this->m_coast; }
	const int 			getPower() 	{ return this->m_power; }
};

// #endif
