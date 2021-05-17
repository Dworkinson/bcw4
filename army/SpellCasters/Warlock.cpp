#include "Warlock.h"

Warlock::Warlock() : IBattleMage("Warlock"
                                , 55
                                , 2
                                , false
                                , std::unique_ptr<HumanState>(new HumanState())
                                , std::unique_ptr<MageAttack>(new MageAttack())
                                , "Battle mage"
                                , 150)
                                    // , std::move(fireball)
                                    // , std::move(lightRestoration)
{
    fireball = std::make_unique<Fireball>();
    lightRestoration = std::make_unique<LightRestoration>();
    deamonsCounter = 5;
}

Warlock::~Warlock() = default;

int Warlock::getDeamonsCounter()
{
    return this->deamonsCounter;
}

// Deamon* Warlock::createDeamon()
// {
//     return new Deamon;
// }

void Warlock::summonDeamon()
{
    if ( this->getDeamonsCounter() <= 0 ) {
        std::cout << "Your deamon's box is empty" << std::endl;
        return;
    }

    std::cout << this->getName() << " summon deamon" << std::endl;
    
    this->deamonsCounter -= 1;
    std::cout << this->getDeamonsCounter() << " deamon(s) left" << std::endl;
}
