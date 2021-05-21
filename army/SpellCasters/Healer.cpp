#include "Healer.h"

Healer::Healer() : IHealer("Healer"
                                , 45
                                , 2
                                , false
                                , std::unique_ptr<HumanState>(new HumanState())
                                , std::unique_ptr<MageAttack>(new MageAttack())
                                , "Healer"
                                , 130)
{
    fireball            = std::make_unique<Fireball>();
    firestorm           = std::make_unique<Firestorm>();

    lightRestoration    = std::make_unique<LightRestoration>();
    restoration         = std::make_unique<Restoration>();
    greatRestoration    = std::make_unique<GreatRestoration>();
}

Healer::~Healer() = default;
