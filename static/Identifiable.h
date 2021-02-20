#pragma once
#include <iostream>

class Identifiable
{
private:
    int id;

    static int identificator;

public:
    Identifiable();
    ~Identifiable();

    Identifiable(const Identifiable& copy);
    Identifiable& operator=(const Identifiable& copy);

    int getId() const;
};
