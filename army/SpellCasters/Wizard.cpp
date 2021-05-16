#include "Wizard.h"

Wizard::Wizard() : IBattleMage("Wizard"
								, 50
								, 2
								, false
								, std::unique_ptr<HumanState>(new HumanState())
								, std::unique_ptr<MageAttack>(new MageAttack())
								, "Battle mage"
								, 100)
									// , std::move(fireball)
									// , std::move(lightRestoration)
{
	fireball = std::make_unique<Fireball>();
	lightRestoration = std::make_unique<LightRestoration>();
}

Wizard::~Wizard() = default;
