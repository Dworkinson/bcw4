count : Countable.cpp
	g++ -c Countable.cpp -o Countable.o

id : Identifiable.cpp
	g++ -c Identifiable.cpp -o Identifiable.o

ma : main.cpp
	g++ -c main.cpp -o main.o

mo : Mohican.cpp
	g++ -c Mohican.cpp -o Mohican.o

pas : passport/Passport.cpp
	g++ -c passport/Passport.cpp -o Passport.o

date : passport/Date.cpp
	g++ -c passport/Date.cpp -o Date.o

all : Countable.cpp main.cpp Identifiable.cpp Mohican.cpp passport/Passport.cpp passport/Date.cpp
	g++ -c Countable.cpp main.cpp Identifiable.cpp Mohican.cpp passport/Passport.cpp passport/Date.cpp

build : main.o Countable.o Identifiable.o Passport.o Date.o
	g++ main.o Countable.o Identifiable.o Mohican.o Passport.o Date.o -o main.exe && main

clean :
	rm -rf *.o *.exe
