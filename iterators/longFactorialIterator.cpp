#include "longFactorialIterator.h"
#include <iostream>

longFactorialIterator::longFactorialIterator(unsigned long long *valuesPointer, unsigned int *rangesPointer, size_t limit) 
{
    valuesBegin = valuesPointer;
    rangesBegin = rangesPointer;

    valuesCurrent = valuesPointer;
    rangesCurrent = rangesPointer;

    valuesEnd = valuesPointer + limit - 1;
    rangesEnd = rangesPointer + limit - 1;
}

longFactorialIterator::~longFactorialIterator() {}

void longFactorialIterator::move_to_begin()
{
    valuesCurrent = valuesBegin;
    rangesCurrent = rangesBegin;
}

void longFactorialIterator::move_to_end()
{
    valuesCurrent = valuesEnd;
    rangesCurrent = rangesEnd;
}

void longFactorialIterator::move_to(size_t index)
{   
    valuesCurrent = valuesBegin + index;
    rangesCurrent = rangesBegin + index;

    if ( isOver() ) 
    {
        std::cout << "Outside of sequence. Moved to the end." << std::endl;
        valuesCurrent = valuesEnd;
        rangesCurrent = rangesEnd;
    }
}

void longFactorialIterator::next()
{
    valuesCurrent += 1;
    rangesCurrent += 1;
}

void longFactorialIterator::previous()
{
    valuesCurrent -= 1;
    rangesCurrent -= 1;
}

void longFactorialIterator::value()
{
    if ( isOver() )
    {
        std::cout << "End of sequence. Returned to the begin." << std::endl;
        valuesCurrent = valuesBegin;
        rangesCurrent = rangesBegin;
    }

    std::cout << *valuesCurrent << "*10^" << *rangesCurrent << std::endl;
}

bool longFactorialIterator::isOver()
{
    return rangesCurrent < rangesBegin || rangesCurrent > rangesEnd;
}
