#include "longFactorial.h"

longFactorial::longFactorial(size_t capacity)
{
    this->values = (unsigned long long*)malloc(capacity*sizeof(unsigned long long));
    this->ranges = (size_t*)malloc(capacity*sizeof(size_t));
    this->it = std::make_unique<longFactorialIterator>(values, ranges, capacity);

    values[0] = 1;
    values[1] = 1;
    values[2] = 2;

    ranges[0] = 0;
    ranges[1] = 0;
    ranges[2] = 0;

    size_t range = 0;

    for ( int i = 3; i < capacity; i++ )
    {
        values[i] = values[i-1] * i;
        if ( values[i] % 10 == 0 ) {
            range += 1;
            values[i] /=10;
            ranges[i] = range;
        }
        ranges[i] = range;
    }
}

longFactorial::~longFactorial() {
    free(values);
    free(ranges);
}
