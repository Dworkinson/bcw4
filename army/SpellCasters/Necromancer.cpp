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
}

Necromancer::~Necromancer() = default;

void Necromancer::takeDamage(int damage)
{
    IUnit::takeDamage(damage);
    if ( !(this->isAlive()) ) {
        typename std::set<Subject*>::iterator it = subjects->begin();
        for ( int i = subjects->size(); i > 0; it++, i-- ) {
            (*it)->detachObs(this);
        }
    }
}

void Necromancer::attacking(IUnit& enemy)
{
    this->attachSubj(&enemy);
    enemy.attachObs(this);
    m_attack->attacking(*this, enemy);
}

void Necromancer::counterAttacking(IUnit& enemy)
{
    attachSubj(&enemy);
    enemy.attachObs(this);
    m_attack->counterAttacking(*this, enemy);
}

void Necromancer::useBattleSpell(IUnit& enemy, IBattleSpell& spell)
{
    if ( dynamic_cast<SpellCasterState*>(this->m_state.get())->getCurrentMana() > spell.getCoast() ) {
        attachSubj(&enemy);
        enemy.attachObs(this);
    }
    IBattleMage::useBattleSpell(enemy, spell);
}
