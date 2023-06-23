#include <iostream>


class Calculator
{
public:
    bool set_num1(double number)
    {
        if (number != 0)
        {
            num1 = number;
            return true;
        }
        return false;
    }

    bool set_num2(double number)
    {
        if (number != 0)
        {
            num2 = number;
            return true;
        }
        return false;
    }

    double add()
    {
        return num1 + num2;
    }

    double multiply()
    {
        return num1 * num2;
    }

    double subtract_1_2()
    {
        return num1 - num2;
    }

    double subtract_2_1()
    {
        return num2 - num1;
    }

    double divide_1_2()
    {
        return num1 / num2;
    }

    double divide_2_1()
    {
        return num2 / num1;
    }

private:
    double num1 = 0;
    double num2 = 0;
};


void main()
{
    Calculator calculator;
    double num1 = 0;
    double num2 = 0;
    for (;;)
    {
        std::cout << "Input num1: ";
        std::cin >> num1;
        std::cout << "Input num2: ";
        std::cin >> num2;
        if (!calculator.set_num1(num1) || !calculator.set_num2(num2))
        {
            std::cout << "Wrong input!\n";
            continue;
        }
        std::cout << "num1 + num2 = " << calculator.add() << std::endl;
        std::cout << "num1 - num2 = " << calculator.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calculator.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << calculator.multiply() << std::endl;
        std::cout << "num1 / num2 = " << calculator.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calculator.divide_2_1() << std::endl;
    }
}
