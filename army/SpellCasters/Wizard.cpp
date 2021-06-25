#include "Wizard.h"

Wizard::Wizard() : IBattleMage("Wizard"
                                , std::unique_ptr<WizardState>(new WizardState())
                                , std::unique_ptr<BaseAttack>(new BaseAttack())
                                , "Battle mage")
{
    fireball            = std::make_unique<Fireball>();
    firestorm           = std::make_unique<Firestorm>();
    commet              = std::make_unique<Commet>();

    lightRestoration    = std::make_unique<LightRestoration>();
    restoration         = std::make_unique<Restoration>();
}

Wizard::~Wizard() = default;
