#include "Wizard.h"

Wizard::Wizard() : IBattleMage("Wizard"
                                , 50
                                , 2
                                , false
                                , std::unique_ptr<HumanState>(new HumanState())
                                , std::unique_ptr<MageAttack>(new MageAttack())
                                , "Battle mage"
                                , 100)
{
    fireball            = std::make_unique<Fireball>();
    firestorm           = std::make_unique<Firestorm>();
    commet              = std::make_unique<Commet>();

    lightRestoration    = std::make_unique<LightRestoration>();
    restoration         = std::make_unique<Restoration>();
}

Wizard::~Wizard() = default;
