#include "Mohican.h"

Mohican* Mohican::lastMohican;

Mohican::Mohican(const std::string& name) : name(name)
{
    selfPointer = this;
    lastMohican = selfPointer;
}

Mohican::~Mohican(){}

Mohican::Mohican(const Mohican& copy)
{
    name = copy.name;
}

Mohican& Mohican::operator=(const Mohican& copy)
{
    name = copy.name;
    return *this;
}

Mohican* Mohican::getLastMohican()
{
    return Mohican::lastMohican;
}

void Mohican::show() const
{
    std::cout << name << std::endl;
}
