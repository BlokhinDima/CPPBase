#include <iostream>
#include <string>
#include "math.h"

int main()
{
    int first_num{};
    int second_num{};

    std::cout << "Input first number: ";
    std::cin >> first_num;
    std::cout << "Input second number: ";
    std::cin >> second_num;

    char choice{};
    std::cout << "Choose operation (1 - add, 2 - subtract, 3 - multiply, 4 - divide, 5 - power): ";
    std::cin >> choice;

    if (choice == '1')
    {
        auto result = math::add(first_num, second_num);
        std::cout << first_num << " plus " << second_num << " = " << result << std::endl;
    }
    else if (choice == '2')
    {
        auto result = math::subtract(first_num, second_num);
        std::cout << first_num << " minus " << second_num << " = " << result << std::endl;
    }
    else if (choice == '3')
    {
        auto result = math::multiply(first_num, second_num);
        std::cout << first_num << " multiplied by " << second_num << " = " << result << std::endl;
    }
    else if (choice == '4')
    {
        auto result = math::divide(first_num, second_num);
        std::cout << first_num << " divided by " << second_num << " = " << result << std::endl;
    }
    else if (choice == '5')
    {
        auto result = math::pow(first_num, second_num);
        std::cout << first_num << " to the power of " << second_num << " = " << result << std::endl;
    }

    return 0;
}
