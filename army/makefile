ma : main.cpp
	g++ -c main.cpp -o main.o

is : States/IState.cpp
	g++ -c States/IState.cpp -o IState.o

bs : States/BerserkerState.cpp
	g++ -c States/BerserkerState.cpp -o BerserkerState.o

ds : States/DemonState.cpp
	g++ -c States/DemonState.cpp -o DemonState.o

rs : States/RogueState.cpp
	g++ -c States/RogueState.cpp -o RogueState.o

ss : States/SoldierState.cpp
	g++ -c States/SoldierState.cpp -o SoldierState.o

hes : States/HealerState.cpp
	g++ -c States/HealerState.cpp -o HealerState.o

ns : States/NecromancerState.cpp
	g++ -c States/NecromancerState.cpp -o NecromancerState.o

ps : States/PriestState.cpp
	g++ -c States/PriestState.cpp -o PriestState.o

was : States/WarlockState.cpp
	g++ -c States/WarlockState.cpp -o WarlockState.o

wis : States/WizardState.cpp
	g++ -c States/WizardState.cpp -o WizardState.o

iat : Attack/IAttack.cpp
	g++ -c Attack/IAttack.cpp -o IAttack.o

sat : Attack/SoldierAttack.cpp
	g++ -c Attack/SoldierAttack.cpp -o SoldierAttack.o

rat : Attack/RogueAttack.cpp
	g++ -c Attack/RogueAttack.cpp -o RogueAttack.o

vat : Attack/VampireAttack.cpp
	g++ -c Attack/VampireAttack.cpp -o VampireAttack.o

bat : Attack/BaseAttack.cpp
	g++ -c Attack/BaseAttack.cpp -o BaseAttack.o

wat : Attack/WerewolfAttack.cpp
	g++ -c Attack/WerewolfAttack.cpp -o WerewolfAttack.o

mat : Attack/MageAttack.cpp
	g++ -c Attack/WerewolfAttack.cpp -o WerewolfAttack.o

pat : Attack/PriestAttack.cpp
	g++ -c Attack/PriestAttack.cpp -o PriestAttack.o

hs : States/HumanState.cpp
	g++ -c States/HumanState.cpp -o HumanState.o

ws : States/WolfState.cpp
	g++ -c States/WolfState.cpp -o WolfState.o

vs : States/VampireState.cpp
	g++ -c States/VampireState.cpp -o VampireState.o

scs : States/SpellCasterState.cpp
	g++ -c States/SpellCasterState.cpp -o SpellCasterState.o

iu : Units/IUnit.cpp
	g++ -c Units/IUnit.cpp -o IUnit.o

so : Units/Soldier.cpp
	g++ -c Units/Soldier.cpp -o Soldier.o

ro : Units/Rogue.cpp
	g++ -c Units/Rogue.cpp -o Rogue.o

be : Units/Berserker.cpp
	g++ -c Units/Berserker.cpp -o Berserker.o

va : Units/Vampire.cpp
	g++ -c Units/Vampire.cpp -o Vampire.o

we : Units/Werewolf.cpp
	g++ -c Units/Werewolf.cpp -o Werewolf.o

de : Units/Demon.cpp
	g++ -c Units/Demon.cpp -o Demon.o

isp : SpellCasters/ISpellCaster.cpp
	g++ -c SpellCasters/ISpellCaster.cpp -o ISpellCaster.o

ibm : SpellCasters/IBattleMage.cpp
	g++ -c SpellCasters/IBattleMage.cpp -o IBattleMage.o

ihe : SpellCasters/IHealer.cpp
	g++ -c SpellCasters/IHealer.cpp -o SpellCasters/IHealer.o

wiz : SpellCasters/Wizard.cpp
	g++ -c SpellCasters/Wizard.cpp -o Wizard.o

hea : SpellCasters/Healer.cpp
	g++ -c SpellCasters/Healer.cpp -o Healer.o

pri : SpellCasters/Priest.cpp
	g++ -c SpellCasters/Priest.cpp -o Priest.o

war : SpellCasters/Warlock.cpp
	g++ -c SpellCasters/Warlock.cpp -o Warlock.o

nec : SpellCasters/Necromancer.cpp
	g++ -c SpellCasters/Necromancer.cpp -o Necromancer.o

sc : SpellCasters/*.cpp
	g++ -c SpellCasters/*.cpp

ibs : Spellbook/IBattleSpell.cpp
	g++ -c Spellbook/IBattleSpell.cpp -o IBattleSpell.o

ihs : Spellbook/IHealingSpell.cpp
	g++ -c Spellbook/IHealingSpell.cpp -o IHealingSpell.o

lr : Spellbook/LightRestoration.cpp
	g++ -c Spellbook/LightRestoration.cpp -o LightRestoration.o

fb : Spellbook/Fireball.cpp
	g++ -c Spellbook/Fireball.cpp -o Fireball.o

an : Spellbook/Annihilation.cpp
	g++ -c Spellbook/Annihilation.cpp -o Annihilation.o

wsb : Spellbook/WizardSpellbook.cpp
	g++ -c Spellbook/WizardSpellbook.cpp -o WizardSpellbook.o

iobsr : IObserver.cpp
	g++ -c IObserver.cpp -o IObserver.o

iobse : IObservable.cpp
	g++ -c IObservable.cpp -o IObservable.o

# scs : SpellCasters/*.cpp
# 	g++ -c SpellCasters/*.cpp

all : *.cpp Units/*.cpp States/*.cpp Attack/*.cpp SpellCasters/*.cpp 
	g++ -c *.cpp Units/*.cpp States/*.cpp Attack/*.cpp SpellCasters/*.cpp 

deb : *.o
	g++ *.o -o main.exe

clean : 
	rm -rf *.o *.exe
