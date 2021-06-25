#include "ISpellCaster.h"
#include "../Attack/BaseAttack.h"

ISpellCaster::ISpellCaster(const std::string& name
                            , std::unique_ptr<SpellCasterState> state
                            , std::unique_ptr<BaseAttack> attack
                            , const std::string& specialization
                            )
    : IUnit(name, std::move(state), std::move(attack))
    , m_specialization(specialization)
{
}

ISpellCaster::~ISpellCaster() = default;

const std::string ISpellCaster::getSpecialization()
{
    return this->m_specialization;
}


void ISpellCaster::print()
{
    std::cout << "==================" << std::endl;
    std::cout << this->getName() << std::endl;
    std::cout << "\t" << this->getSpecialization() << std::endl;
    m_state->printState();
    std::cout << "==================" << std::endl;
}