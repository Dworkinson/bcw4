#pragma once

#include <cstdlib>

class longFactorialIterator
{
private:
    unsigned long long *valuesBegin;
    unsigned long long *valuesCurrent;
    unsigned long long *valuesEnd;

    size_t *rangesBegin;
    size_t *rangesCurrent;
    size_t *rangesEnd;

public:
    longFactorialIterator(unsigned long long *valuesPointer, unsigned int *rangesPointer, size_t limit);
    ~longFactorialIterator();
    
    void move_to_begin();
    void move_to_end();
    void move_to(size_t index);

    void next();
    void previous();
    void value();

    bool isOver();
};
