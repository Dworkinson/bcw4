ma : main.cpp
	g++ -c main.cpp -o main.o

cat : Category/Category.cpp
	g++ -c Category/Category.cpp -o Category.o

it : Item/Item.cpp
	g++ -c Item/Item.cpp -o Item.o

cu : Customer/Customer.cpp
	g++ -c Customer/Customer.cpp -o Customer.o

all : main.cpp Category/Category.cpp Item/Item.cpp
	g++ -c main.cpp Category/Category.cpp Item/Item.cpp

deb : main.o Category.o
	g++ main.o Category.o Item.o -o main.exe

clean :
	rm -rf *.o *.exe