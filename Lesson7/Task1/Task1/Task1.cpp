#include <iostream>

#define MODE 1
//#undef MODE

#ifndef MODE
#error MODE macro required!
#elif MODE == 1
int add(int a, int b)
{
    return a + b;
}
#endif

int main()
{

#if MODE == 0
    std::cout << "Working in training mode!";
#elif MODE == 1
    int val_1{};
    int val_2{};
    std::cout << "Input first value: ";
    std::cin >> val_1;
    std::cout << "Input second value: ";
    std::cin >> val_2;
    std::cout << "Sum of values = " << add(val_1, val_2);
#else
    std::cout << "Unknown mode. Shutdown.";
#endif
    return 0;
}
