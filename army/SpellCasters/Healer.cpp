#include "Healer.h"

Healer::Healer() : IHealer("Healer"
                                , std::unique_ptr<HealerState>(new HealerState())
                                , std::unique_ptr<BaseAttack>(new BaseAttack())
                                , "Healer")
{
    fireball            = std::make_unique<Fireball>();
    firestorm           = std::make_unique<Firestorm>();

    lightRestoration    = std::make_unique<LightRestoration>();
    restoration         = std::make_unique<Restoration>();
    greatRestoration    = std::make_unique<GreatRestoration>();
}

Healer::~Healer() = default;
