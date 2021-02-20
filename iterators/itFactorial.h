#pragma once

#include <cstdlib>
#include <memory>

class itFactorial
{
private:
    unsigned long long* arr;
    size_t current;
    size_t start;
    size_t end;

public:
    itFactorial(size_t capacity);
    ~itFactorial();
    
    void next();
    void previous();

    void move_to_begin();
    void move_to_end();
    void move_to(size_t index);
    long long value();

    bool isOver();

    void operator++();
    void operator++(int);
    void operator--();
    void operator--(int);
    long long operator*();
};
