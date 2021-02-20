#pragma once
#include <iostream>

class Countable
{
    static int counter;

public:
    Countable();
    ~Countable();

    Countable(const Countable& copy);
    Countable& operator=(const Countable& copy);

    static int getCounter();
};
