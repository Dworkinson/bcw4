#include "arProgression.h"

template <class Type>
arProgression<Type>::arProgression(size_t capacity, Type start, Type step)
{
    this->start = start;
    this->step = step;


    this->arr = (Type*)malloc(capacity*sizeof(Type));
    this->it = std::make_unique<Iterator<Type>>(arr, capacity);

    arr[0] = start;
    for ( int i = 1; i < capacity; i++ )
    {
        arr[i] = arr[i-1] + step;
    }
}

template <class Type>
arProgression<Type>::~arProgression() {
    free(arr);
}

template class arProgression<int>;
template class arProgression<double>;
template class arProgression<float>;
