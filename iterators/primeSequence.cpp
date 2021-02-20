#include "primeSequence.h"

bool isPrime(int value)
{
    int i = 2;
    for ( ; value % i != 0; i++ );
        if ( i < value ) {
            return false;
        }
    return true;
}

template <class Type>
primeSequence<Type>::primeSequence(size_t capacity)
{
    this->arr = (Type*)malloc(capacity*sizeof(Type));
    this->it = std::make_unique<Iterator<Type>>(arr, capacity);

    for ( int counter = 0, i = 2; counter < capacity; i++ )
    {
        if ( isPrime(i) ) {
            arr[counter] = i;
            counter += 1;
        }
    }
}

template <class Type>
primeSequence<Type>::~primeSequence() {
    free(arr);
}

template class primeSequence<int>;
