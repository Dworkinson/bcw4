#include "Necromancer.h"

Necromancer::Necromancer() : IBattleMage("Necromancer"
                                , 60
                                , 2
                                , true
                                , std::unique_ptr<HumanState>(new HumanState())
                                , std::unique_ptr<MageAttack>(new MageAttack())
                                , "Battle mage"
                                , 60)
{
    fireball = std::make_unique<Fireball>();
    lightRestoration = std::make_unique<LightRestoration>();
}

Necromancer::~Necromancer() = default;
