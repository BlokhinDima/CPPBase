#pragma once

namespace counters
{
    class Counter
    {
    public:
        Counter();
        Counter(int initial_value);
        int getValue();
        void increment();
        void decrement();

    private:
        int counter_value = 1;
    };
}
