#pragma once

#include <cstdlib>
#include <memory>

#include "longFactorialIterator.h"

class longFactorial
{
private:
    unsigned long long *values;
    size_t *ranges;

public:
    std::unique_ptr<longFactorialIterator> it;
    longFactorial(size_t capacity);
    ~longFactorial();
};
