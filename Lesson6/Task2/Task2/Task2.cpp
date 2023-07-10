#include <iostream>
#include "counters.h"

int main()
{
    counters::Counter* ptr_counter;
    char choice{};

    for (;;)
    {
        std::cout << "Do you vant to set initial counter value? Y/N: ";
        std::cin >> choice;
        if (choice == 'Y')
        {
            std::cout << "Input initial value: ";
            int input;
            std::cin >> input;
            counters::Counter counter(input);
            ptr_counter = &counter;
        }
        else if (choice == 'N')
        {
            counters::Counter counter;
            ptr_counter = &counter;
        }
        else
        {
            std::cout << "Wrong input!\n";
            continue;
        }
        break;
    }

    for (;;)
    {
        std::cout << "Input command "
            << "'+' - increment counter, "
            << "'-' - decrement counter, "
            << "'=' - print counter value, "
            << "'x' - exit: ";
        std::cin >> choice;

        if (choice == '+')
        {
            ptr_counter->increment();
        }
        else if (choice == '-')
        {
            ptr_counter->decrement();
        }
        else if (choice == '=')
        {
            std::cout << (ptr_counter->getValue()) << std::endl;
        }
        else if (choice == 'x')
        {
            break;
        }
        else
        {
            std::cout << "Wrong input!\n";
        }
    }
    return 0;
}
