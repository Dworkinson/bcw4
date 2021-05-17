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

ip : Properties/IProperties.cpp
	g++ -c Properties/IProperties.cpp -o IProperties.o

sp : Properties/SoldierProperties.cpp
	g++ -c Properties/SoldierProperties.cpp -o SoldierProperties.o

rp : Properties/RogueProperties.cpp
	g++ -c Properties/RogueProperties.cpp -o RogueProperties.o

bp : Properties/BerserkerProperties.cpp
	g++ -c Properties/BerserkerProperties.cpp -o BerserkerProperties.o

vp : Properties/VampireProperties.cpp
	g++ -c Properties/VampireProperties.cpp -o VampireProperties.o

wp : Properties/WerewolfProperties.cpp
	g++ -c Properties/WerewolfProperties.cpp -o WerewolfProperties.o

# all : States/IState.cpp States/Attack.cpp States/HumanState.cpp States/WolfState.cpp Units/IUnit.cpp Units/Soldier.cpp Units/Rogue.cpp Units/Rogue.cpp Units/Berserker.cpp
# 	g++ -c main.cpp IUnit.cpp Soldier.cpp Rogue.cpp Attack.cpp Vampire.cpp Werewolf.cpp IState.cpp HumanState.cpp WolfState.cpp

# deb : main.o IUnit.o Soldier.o Rogue.o Attack.o Vampire.o Werewolf.o IState.o HumanState.o WolfState.o
# 	g++ main.o IUnit.o Soldier.o Rogue.o Attack.o Vampire.o Werewolf.o IState.o HumanState.o WolfState.o -o main.exe

all : *.cpp Units/*.cpp States/*.cpp Attack/*.cpp Properties/*.cpp
	g++ -c *.cpp Units/*.cpp States/*.cpp Attack/*.cpp Properties/*.cpp

deb : *.o
	g++ *.o -o main.exe

clean : 
	rm -rf *.o *.exe
