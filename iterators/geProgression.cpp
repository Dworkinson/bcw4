#include "geProgression.h"


template <class Type>
geProgression<Type>::geProgression(size_t capacity, Type start, Type step)
{
    this->start = start;
    this->step = step;


    this->arr = (Type*)malloc(capacity*sizeof(Type));
    this->it = std::make_unique<Iterator<Type>>(arr, capacity);

    arr[0] = start;
    for ( int i = 1; i < capacity; i++ )
    {
        arr[i] = arr[i-1] * step;
    }
}

template <class Type>
geProgression<Type>::~geProgression() {
    free(arr);
}

template class geProgression<int>;
template class geProgression<double>;
template class geProgression<float>;
