#include "Demon.h"

Demon::Demon() : IUnit("Demon"
                        , std::unique_ptr<DemonState>(new DemonState())
                        , std::unique_ptr<BaseAttack>(new BaseAttack()))
{
}

Demon::~Demon() = default;
