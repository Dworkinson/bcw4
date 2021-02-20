arp : arProgression.cpp
	g++ -c arProgression.cpp -o arProgression.o

gep : geProgression.cpp
	g++ -c geProgression.cpp -o geProgression.o

fib : fiSequence.cpp
	g++ -c fiSequence.cpp -o fiSequence.o

prime : primeSequence.cpp
	g++ -c primeSequence.cpp -o primeSequence.o

ma : main.cpp
	g++ -c main.cpp -o main.o

it : Iterator.cpp
	g++ -c Iterator.cpp -o Iterator.o

itf : itFactorial.cpp
	g++ -c itFactorial.cpp -o itFactorial.o

lf : longFactorial.cpp
	g++ -c longFactorial.cpp -o longFactorial.o

fit : longFactorialIterator.cpp
	g++ -c longFactorialIterator.cpp -o longFactorialIterator.o

all : Iterator.cpp main.cpp arProgression.cpp geProgression.cpp primeSequence.cpp itFactorial.cpp
	g++ -c Iterator.cpp main.cpp arProgression.cpp geProgression.cpp primeSequence.cpp itFactorial.cpp longFactorial.cpp longFactorialIterator.cpp

deb : Iterator.o main.o arProgression.o geProgression.o fiSequence.o primeSequence.o
	g++ main.o Iterator.o arProgression.o geProgression.o fiSequence.o primeSequence.o itFactorial.o longFactorial.o longFactorialIterator.o -o main.exe

clean :
	rm -rf *.o *.exe

