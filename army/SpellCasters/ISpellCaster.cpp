#include "ISpellCaster.h"
#include "../Attack/IAttack.h"

ISpellCaster::ISpellCaster(const std::string& name
                            , int hp
                            , int damage
                            , bool isUndead
                            , std::unique_ptr<IState> state
                            , std::unique_ptr<IAttack> attack
                            , const std::string& specialization
                            , int mp
                            // , std::unique_ptr<Fireball> fireBall
       //              		, std::unique_ptr<LightRestoration> lightRestoration
                            )
    : IUnit(name, hp, damage, isUndead, std::move(state), std::move(attack))

    , m_specialization(specialization)
    , m_maxMana(mp)
    , m_currentMana(mp)
{
	// lightRestoration = std::move(lightRestoration);
	// fireBall = std::move(fireBall);
}

ISpellCaster::~ISpellCaster() = default;

const std::string ISpellCaster::getSpecialization()
{
    return this->m_specialization;
}

const int ISpellCaster::getMaxMana()
{
    return this->m_maxMana;
}

const int ISpellCaster::getCurrentMana()
{
    return this->m_currentMana;
}

void ISpellCaster::setCurrentMana(int mp)
{
    this->m_currentMana = mp;
}

void ISpellCaster::setMaxMana(int mp)
{
    this->m_maxMana = mp;
}


void ISpellCaster::print()
{
    std::cout << "==================" << std::endl;
    std::cout << this->getName() << "(" << m_state->getState() << ")" << std::endl;
    std::cout << "\t" << this->getSpecialization() << std::endl;
    std::cout << "\tHP: " << this->getCurrentHealth() << " / " << this->getMaxHealth() << std::endl;
    std::cout << "\tMP: " << this->getCurrentMana() << " / " << this->getMaxMana() << std::endl;
    std::cout << "\tDamage: " << this->getDamage() << std::endl;
    if ( this->isUndead() ) {
        std::cout << "\tUNDEAD" << std::endl;
    }
    std::cout << "==================" << std::endl;
}