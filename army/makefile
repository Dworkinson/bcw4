ma : main.cpp
	g++ -c main.cpp -o main.o

is : States/IState.cpp
	g++ -c States/IState.cpp -o IState.o

iat : Attack/IAttack.cpp
	g++ -c Attack/IAttack.cpp -o IAttack.o

sat : Attack/SoldierAttack.cpp
	g++ -c Attack/SoldierAttack.cpp -o SoldierAttack.o

rat : Attack/RogueAttack.cpp
	g++ -c Attack/RogueAttack.cpp -o RogueAttack.o

vat : Attack/VampireAttack.cpp
	g++ -c Attack/VampireAttack.cpp -o VampireAttack.o

bat : Attack/BerserkerAttack.cpp
	g++ -c Attack/BerserkerAttack.cpp -o BerserkerAttack.o

wat : Attack/WerewolfAttack.cpp
	g++ -c Attack/WerewolfAttack.cpp -o WerewolfAttack.o

hs : States/HumanState.cpp
	g++ -c States/HumanState.cpp -o HumanState.o

ws : States/WolfState.cpp
	g++ -c States/WolfState.cpp -o WolfState.o

vs : States/VampireState.cpp
	g++ -c States/VampireState.cpp -o VampireState.o

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

# ip : Properties/IProperties.cpp
# 	g++ -c Properties/IProperties.cpp -o IProperties.o

# sp : Properties/SoldierProperties.cpp
# 	g++ -c Properties/SoldierProperties.cpp -o SoldierProperties.o

# all : States/IState.cpp States/Attack.cpp States/HumanState.cpp States/WolfState.cpp Units/IUnit.cpp Units/Soldier.cpp Units/Rogue.cpp Units/Rogue.cpp Units/Berserker.cpp
# 	g++ -c main.cpp IUnit.cpp Soldier.cpp Rogue.cpp Attack.cpp Vampire.cpp Werewolf.cpp IState.cpp HumanState.cpp WolfState.cpp

# deb : main.o IUnit.o Soldier.o Rogue.o Attack.o Vampire.o Werewolf.o IState.o HumanState.o WolfState.o
# 	g++ main.o IUnit.o Soldier.o Rogue.o Attack.o Vampire.o Werewolf.o IState.o HumanState.o WolfState.o -o main.exe

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

scs : SpellCasters/*.cpp
	g++ -c SpellCasters/*.cpp

all : *.cpp Units/*.cpp States/*.cpp Attack/*.cpp SpellCasters/*.cpp 
	g++ -c *.cpp Units/*.cpp States/*.cpp Attack/*.cpp SpellCasters/*.cpp 

deb : *.o
	g++ *.o -o main.exe

clean : 
	rm -rf *.o *.exe
