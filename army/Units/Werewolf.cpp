#include "Werewolf.h"

Werewolf::Werewolf() : IUnit("Werewolf"
                            , std::unique_ptr<HumanState>(new HumanState())
                            , std::unique_ptr<BaseAttack>(new BaseAttack()))
{
    this->wolfForm = false;
}

Werewolf::~Werewolf() = default;

void Werewolf::transform()
{
    int tempHP = m_state->getCurrentHealth();

    if ( dynamic_cast<HumanState*>(this->m_state.get())) {
        this->swichToState(std::make_unique<WolfState>());
        m_state->setCurrentHealth(tempHP);

        this->wolfForm = true;

        std::cout << this->getName() << " transform to the wolf." << std::endl;
        std::cout << "---------------------" << std::endl;

    } else {
        this->swichToState(std::make_unique<HumanState>());
        m_state->setCurrentHealth(tempHP);

        this->wolfForm = false;

        std::cout << this->getName() << " transform to the human." << std::endl;
        std::cout << "---------------------" << std::endl;
    }
}

void Werewolf::bite(IUnit& enemy)
{
    if ( !wolfForm ) {
        std::cout << getName() << " can't bite " << enemy.getName() << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    Bite::turnTo(*this, enemy);
}
