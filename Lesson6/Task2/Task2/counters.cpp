#include "counters.h"

counters::Counter::Counter() {};

counters::Counter::Counter(int initial_value)
{
    counter_value = initial_value;
}

int counters::Counter::getValue()
{
    return counter_value;
}

void counters::Counter::increment()
{
    ++counter_value;
}

void counters::Counter::decrement()
{
    --counter_value;
}
