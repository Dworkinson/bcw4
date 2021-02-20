#include "fiSequence.h"

//using positive "sign" to get positive sequence of negative "sign" to get negative sequence
template <class Type>
fiSequence<Type>::fiSequence(size_t capacity, int sign)
{
    this->arr = (Type*)malloc(capacity*sizeof(Type));
    this->it = std::make_unique<Iterator<Type>>(arr, capacity);

    arr[0] = 0;
    arr[1] = 1;
    if ( sign > 0 ) {
        for ( int i = 2; i < capacity; i++ )
        {
            arr[i] = arr[i-1] + arr[i-2];
        } 
    } else {
        int n1 = 0;
        int n2 = 1;
        int temp = 0;

        for ( int i = 2; i < capacity; i++ )
        {
            temp = n1 - n2;
            n1 = n2;
            n2 = temp;
            arr[i] = temp;
        }
    }
}

template <class Type>
fiSequence<Type>::~fiSequence() {
    free(arr);
}

template class fiSequence<int>;
template class fiSequence<long int>;
template class fiSequence<long long int>;
