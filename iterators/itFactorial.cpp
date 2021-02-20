#include "itFactorial.h"

itFactorial::itFactorial(size_t capacity)
{
    this->arr = (unsigned long long*)malloc(capacity*sizeof(unsigned long long));

    this->current = 0;
    this->start = 0;
    this->end = capacity - 1;

    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;

    for ( int i = 3; i < capacity; i++ )
    {
        arr[i] = arr[i-1] * i;
    }
}

itFactorial::~itFactorial(){}
    
void itFactorial::next()
{
    if ( isOver() ) { return; }
    current += 1;
}

void itFactorial::previous()
{
    if ( isOver() ) { return; }
    current -= 1;
}

void itFactorial::move_to_begin()
{
    current = start;
}

void itFactorial::move_to_end()
{
    current = end;
}

void itFactorial::move_to(size_t index)
{
    current = start + index;
}

long long itFactorial::value()
{
    return arr[current];
}

bool itFactorial::isOver()
{
    return current < start || current > end;
}

void itFactorial::operator++() { next(); }
void itFactorial::operator++(int) { operator++(); }
void itFactorial::operator--() { previous(); }
void itFactorial::operator--(int) { operator--(); }
long long itFactorial::operator*() { return value(); }
