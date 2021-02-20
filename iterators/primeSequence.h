#pragma once

#include <iostream>
#include <cstdlib>
#include <memory>

#include "Iterator.h"

template <class Type>
class primeSequence
{
private:
    Type *arr;

public:
    std::unique_ptr<Iterator<Type>> it;
    primeSequence(size_t capacity);
    ~primeSequence();

};

bool isPrime(int value);