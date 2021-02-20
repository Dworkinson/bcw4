#include "Countable.h"

int Countable::counter  = 0;

Countable::Countable()
{
    counter     += 1;
}

Countable::~Countable()
{
    counter     -= 1;
}

Countable::Countable(const Countable& copy)
{
    counter     += 1;
}

Countable& Countable::operator=(const Countable& copy)
{
    return *this;
}

int Countable::getCounter() {
    return counter;
}
