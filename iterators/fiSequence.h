#pragma once

#include <iostream>
#include <cstdlib>
#include <memory>

#include "Iterator.h"

template <class Type>
class fiSequence
{
private:
    Type *arr;

public:
    std::unique_ptr<Iterator<Type>> it;
    fiSequence(size_t capacity, int sign);
    ~fiSequence();
};
