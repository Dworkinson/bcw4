#include "Priest.h"

Priest::Priest() : IHealer("Priest"
                                , std::unique_ptr<PriestState>(new PriestState())
                                , std::unique_ptr<PriestAttack>(new PriestAttack())
                                , "Healer")
{
    fireball            = std::make_unique<Fireball>();
    firestorm           = std::make_unique<Firestorm>();

    lightRestoration    = std::make_unique<LightRestoration>();
    restoration         = std::make_unique<Restoration>();
    greatRestoration    = std::make_unique<GreatRestoration>();
    wellness            = std::make_unique<Wellness>();
}

Priest::~Priest() = default;

void Priest::useBattleSpell(IUnit& enemy, IBattleSpell& spell)
{
    std::cout << this->getName() << " using a '" << spell.getName() << "' to the " << enemy.getName() << std::endl;

    if ( dynamic_cast<SpellCasterState*>(m_state.get())->getCurrentMana() < spell.getCoast()) {
        std::cout << "Not anoгпh mana for the spell" << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int tempMP = dynamic_cast<SpellCasterState*>(this->m_state.get())->getCurrentMana() - spell.getCoast();
    dynamic_cast<SpellCasterState*>(this->m_state.get())->setCurrentMana(tempMP);

    std::cout << "Mana: -" << spell.getCoast() << "("
                << dynamic_cast<SpellCasterState*>(m_state.get())->getCurrentMana()
                << "/" << dynamic_cast<SpellCasterState*>(m_state.get())->getMaxMana() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;

    if (!enemy.isAlive()) {
        std::cout << "... enemy is already dead." << std::endl;
        std::cout << "---------------------" << std::endl;
        return;
    }

    int tmpHP = enemy.m_state->getCurrentHealth();

    if ( enemy.m_state->getIsUndead() ) {
        enemy.takeMagicalDamage(spell.getDamage() * 2);
    } else {
        enemy.takeMagicalDamage(spell.getDamage());
    }

    int wound = tmpHP - enemy.m_state->getCurrentHealth();

    std::cout << enemy.getName() << " -" << wound
                << " HP (" << enemy.m_state->getCurrentHealth() << "/" << enemy.m_state->getMaxHealth() << ")" << std::endl;
    std::cout << "---------------------" << std::endl;
}
