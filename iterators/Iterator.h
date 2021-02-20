#pragma once

#include <cstdlib>

template <class Type>
class Iterator
{
private:
    Type *begin;
    Type *current;
    Type *end;

public:
    Iterator(Type *ptr, size_t limit);
    ~Iterator();
    
    void move_to_begin();
    void move_to_end();
    void move_to(size_t index);

    void next();
    void previous();
    Type value();

    bool isOver();
};
