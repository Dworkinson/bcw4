#include "Warlock.h"

Warlock::Warlock() : IBattleMage("Warlock"
                                , std::unique_ptr<WarlockState>(new WarlockState())
                                , std::unique_ptr<BaseAttack>(new BaseAttack())
                                , "Battle mage")
{
    fireball            = std::make_unique<Fireball>();
    firestorm           = std::make_unique<Firestorm>();
    commet              = std::make_unique<Commet>();
    annihilation        = std::make_unique<Annihilation>();

    lightRestoration    = std::make_unique<LightRestoration>();

    demonsCounter = 5;
    demonsLeash = std::make_unique<std::set<Demon*>>();
}

Warlock::~Warlock()
{
    this->killDemons();
}

int Warlock::getDemonsCounter()
{
    return this->demonsCounter;
}

void Warlock::summonDemon()
{
    if ( this->getDemonsCounter() <= 0 ) {
        std::cout << "Your demon's box is empty" << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    Demon* demon = new Demon();
    std::cout << this->getName() << " summoned demon" << std::endl;
    this->demonsLeash->emplace(demon);

    this->demonsCounter     -= 1;

    std::cout << this->getDemonsCounter() << " demon(s) in a box" << std::endl;
    std::cout << "---------------------" << std::endl;

}

void Warlock::killDemons()
{
    typename std::set<Demon*>::iterator it = this->demonsLeash->begin();
    for ( int i = demonsLeash->size(); i > 0; i--, it++ ) {
        delete *it;
        demonsLeash->erase(it);
    }
}

void Warlock::print()
{
    ISpellCaster::print();
    std::cout << "\tDemons in a box: " << this->getDemonsCounter() << std::endl;
    std::cout << "==================" << std::endl;
}
