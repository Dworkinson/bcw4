#include "Iterator.h"
#include <iostream>

template <class Type>
Iterator<Type>::Iterator(Type *ptr, size_t limit) : begin(ptr), current(ptr), end(begin + limit - 1) {}

template <class Type>
Iterator<Type>::~Iterator() {}

template <class Type>
void Iterator<Type>::move_to_begin()
{
    current = begin;
}

template <class Type>
void Iterator<Type>::move_to_end()
{
    current = end;
}

template <class Type>
void Iterator<Type>::move_to(size_t index)
{
    current = begin + index;
    if ( isOver() )
        {
            std::cout << "End of sequence. Returned to the begin." << std::endl;
            current = begin;
        }
}

template <class Type>
void Iterator<Type>::next()
{
    if ( isOver() )
    {
        return;
    }
    
    current += 1;
}

template <class Type>
void Iterator<Type>::previous()
{
    if ( isOver() )
        {
            return;
        }
    
    current -= 1;
}

template <class Type>
Type Iterator<Type>::value()
{
    if ( isOver() )
        {
            std::cout << "End of sequence. Returned to the begin." << std::endl;
            current = begin;
        }
    
    return *current;
}

template <class Type>
bool Iterator<Type>::isOver()
{
    return current < begin || current > end;
}

template class Iterator<int>;
template class Iterator<double>;
template class Iterator<float>;
template class Iterator<long int>;
template class Iterator<long long int>;
