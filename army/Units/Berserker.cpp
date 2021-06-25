#include "Berserker.h"

Berserker::Berserker() : IUnit("Berserker"
                                , std::unique_ptr<BerserkerState>(new BerserkerState())
                                , std::unique_ptr<BaseAttack>(new BaseAttack()))
{
}

Berserker::~Berserker() = default;

void Berserker::takeMagicalDamage(int mDamage)
{
    std::cout << "Berserker: Resist to magic" << std::endl;
}

void Berserker::healing(int hp)
{
    std::cout << "Berserker: Resist to magic" << std::endl;
}