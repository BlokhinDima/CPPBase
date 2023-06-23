#include <iostream>


class Counter
{
public:

    Counter() {};

    Counter(int initial_value)
    {
        counter_value = initial_value;
    }

    int getValue()
    {
        return counter_value;
    }

    void increment()
    {
        ++counter_value;
    }

    void decrement()
    {
        --counter_value;
    }

private:
    int counter_value = 1;
};


int main()
{
    Counter* ptr_counter;
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
            Counter counter(input);
            ptr_counter = &counter;
        }
        else if (choice == 'N')
        {
            Counter counter;
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
