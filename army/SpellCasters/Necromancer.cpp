#include "Necromancer.h"

Necromancer::Necromancer() : IBattleMage("Necromancer"
                                , std::unique_ptr<NecromancerState>(new NecromancerState())
                                , std::unique_ptr<BaseAttack>(new BaseAttack())
                                , "Battle mage")
{
    fireball            = std::make_unique<Fireball>();
    firestorm           = std::make_unique<Firestorm>();

    lightRestoration    = std::make_unique<LightRestoration>();
    restoration         = std::make_unique<Restoration>();

    m_observables = std::make_unique<std::set<IUnit*>>();
}

Necromancer::~Necromancer() = default;

void Necromancer::takeDamage(int damage)
{
    IUnit::takeDamage(damage);
    if ( !(this->isAlive()) ) {
        typename std::set<IUnit*>::iterator observable = m_observables->begin();
        for ( int i = m_observables->size(); i > 0; observable++, i-- ) {
            (*observable)->detachNecromancer(this);
        }
    }
}

void Necromancer::attacking(IUnit& enemy)
{
    attachEnemy(&enemy);
    enemy.attachNecromancer(this);
    m_attack->attacking(*this, enemy);
}

void Necromancer::counterAttacking(IUnit& enemy)
{
    attachEnemy(&enemy);
    enemy.attachNecromancer(this);
    m_attack->counterAttacking(*this, enemy);
}

void Necromancer::useBattleSpell(IUnit& enemy, IBattleSpell& spell)
{
    if ( dynamic_cast<SpellCasterState*>(this->m_state.get())->getCurrentMana() > spell.getCoast() ) {
        attachEnemy(&enemy);
        enemy.attachNecromancer(this);
    }
    IBattleMage::useBattleSpell(enemy, spell);
}

void Necromancer::attachEnemy(IUnit *enemy)
{
    this->m_observables->emplace(enemy);
}

void Necromancer::detachEnemy(IUnit *enemy)
{
    this->m_observables->erase(enemy);
}
