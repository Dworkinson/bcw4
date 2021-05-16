#include "Berserker.h"

Berserker::Berserker() : IUnit("Berserker", 80, 20, false, std::unique_ptr<HumanState>(new HumanState()), std::unique_ptr<BerserkerAttack>(new BerserkerAttack()))
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