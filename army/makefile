make : 
	make makeall
	make linkall

main : main.cpp
	g++ -c main.cpp -o main.o

IState : States/IState.cpp
	g++ -c States/IState.cpp -o IState.o

BerserkerState : States/BerserkerState.cpp
	g++ -c States/BerserkerState.cpp -o BerserkerState.o

DemonState : States/DemonState.cpp
	g++ -c States/DemonState.cpp -o DemonState.o

RogueState : States/RogueState.cpp
	g++ -c States/RogueState.cpp -o RogueState.o

SoldierState : States/SoldierState.cpp
	g++ -c States/SoldierState.cpp -o SoldierState.o

HealerState : States/HealerState.cpp
	g++ -c States/HealerState.cpp -o HealerState.o

NecromancerState : States/NecromancerState.cpp
	g++ -c States/NecromancerState.cpp -o NecromancerState.o

PriestState : States/PriestState.cpp
	g++ -c States/PriestState.cpp -o PriestState.o

WarlockState : States/WarlockState.cpp
	g++ -c States/WarlockState.cpp -o WarlockState.o

WizardState : States/WizardState.cpp
	g++ -c States/WizardState.cpp -o WizardState.o

IAttack : Attack/IAttack.cpp
	g++ -c Attack/IAttack.cpp -o IAttack.o

SoldierAttack : Attack/SoldierAttack.cpp
	g++ -c Attack/SoldierAttack.cpp -o SoldierAttack.o

RogueAttack : Attack/RogueAttack.cpp
	g++ -c Attack/RogueAttack.cpp -o RogueAttack.o

VampireAttack : Attack/VampireAttack.cpp
	g++ -c Attack/VampireAttack.cpp -o VampireAttack.o

BaseAttack : Attack/BaseAttack.cpp
	g++ -c Attack/BaseAttack.cpp -o BaseAttack.o

WerewolfAttack : Attack/WerewolfAttack.cpp
	g++ -c Attack/WerewolfAttack.cpp -o WerewolfAttack.o

MageAttack : Attack/MageAttack.cpp
	g++ -c Attack/WerewolfAttack.cpp -o WerewolfAttack.o

PriestAttack : Attack/PriestAttack.cpp
	g++ -c Attack/PriestAttack.cpp -o PriestAttack.o

HumanState : States/HumanState.cpp
	g++ -c States/HumanState.cpp -o HumanState.o

WolfState : States/WolfState.cpp
	g++ -c States/WolfState.cpp -o WolfState.o

VampireState : States/VampireState.cpp
	g++ -c States/VampireState.cpp -o VampireState.o

SpellCasterState : States/SpellCasterState.cpp
	g++ -c States/SpellCasterState.cpp -o SpellCasterState.o

IUnit : Units/IUnit.cpp
	g++ -c Units/IUnit.cpp -o IUnit.o

Soldier : Units/Soldier.cpp
	g++ -c Units/Soldier.cpp -o Soldier.o

Rogue : Units/Rogue.cpp
	g++ -c Units/Rogue.cpp -o Rogue.o

Berserker : Units/Berserker.cpp
	g++ -c Units/Berserker.cpp -o Berserker.o

Vampire : Units/Vampire.cpp
	g++ -c Units/Vampire.cpp -o Vampire.o

Werewolf : Units/Werewolf.cpp
	g++ -c Units/Werewolf.cpp -o Werewolf.o

Demon : Units/Demon.cpp
	g++ -c Units/Demon.cpp -o Demon.o

ISpellCaster : SpellCasters/ISpellCaster.cpp
	g++ -c SpellCasters/ISpellCaster.cpp -o ISpellCaster.o

IBattleMage : SpellCasters/IBattleMage.cpp
	g++ -c SpellCasters/IBattleMage.cpp -o IBattleMage.o

IHealer : SpellCasters/IHealer.cpp
	g++ -c SpellCasters/IHealer.cpp -o SpellCasters/IHealer.o

Wizard : SpellCasters/Wizard.cpp
	g++ -c SpellCasters/Wizard.cpp -o Wizard.o

Healer : SpellCasters/Healer.cpp
	g++ -c SpellCasters/Healer.cpp -o Healer.o

Priest : SpellCasters/Priest.cpp
	g++ -c SpellCasters/Priest.cpp -o Priest.o

Warlock : SpellCasters/Warlock.cpp
	g++ -c SpellCasters/Warlock.cpp -o Warlock.o

Necromancer : SpellCasters/Necromancer.cpp
	g++ -c SpellCasters/Necromancer.cpp -o Necromancer.o

SpellCasters : SpellCasters/*.cpp
	g++ -c SpellCasters/*.cpp

Observer : Observer/Observer.cpp
	g++ -c Observer/Observer.cpp -o Observer.o

Subject : Observer/Subject.cpp
	g++ -c Observer/Subject.cpp -o Subject.o

makeall : *.cpp Units/*.cpp States/*.cpp Attack/*.cpp SpellCasters/*.cpp Observer/*.cpp
	g++ -c *.cpp Units/*.cpp States/*.cpp Attack/*.cpp SpellCasters/*.cpp Observer/*.cpp

linkall : *.o
	g++ *.o -o main.exe

clean : 
	rm -rf *.o *.exe
