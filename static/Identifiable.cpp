#include "Identifiable.h"

int Identifiable::identificator = 0;

Identifiable::Identifiable()
{

    identificator    += 1;

    id = identificator;
}

Identifiable::~Identifiable()
{
    identificator    -= 1;
}

Identifiable::Identifiable(const Identifiable& copy)
{
    identificator    += 1;

    id      = identificator;
}

Identifiable& Identifiable::operator=(const Identifiable& copy)
{
    return *this;
}

int Identifiable::getId() const { return id; }
