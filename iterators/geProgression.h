#pragma once

#include <iostream>
#include <cstdlib>
#include <memory>

#include "Iterator.h"

template <class Type>
class geProgression
{
private:
    Type *arr;
    Type start;
    Type step;

public:
    std::unique_ptr<Iterator<Type>> it;
    geProgression(size_t capacity, Type start, Type step);
    ~geProgression();

};
