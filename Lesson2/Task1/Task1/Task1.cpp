#include <iostream>
#include <string>

enum class Months
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER,
};

void printMonthName(Months month)
{
    std::string month_str;
    switch (month)
    {
        case Months::JANUARY:
            month_str = "January";
            break;
        case Months::FEBRUARY:
            month_str = "February";
            break;
        case Months::MARCH:
            month_str = "March";
            break;
        case Months::APRIL:
            month_str = "April";
            break;
        case Months::MAY:
            month_str = "May";
            break;
        case Months::JUNE:
            month_str = "June";
            break;
        case Months::JULY:
            month_str = "July";
            break;
        case Months::AUGUST:
            month_str = "August";
            break;
        case Months::SEPTEMBER:
            month_str = "September";
            break;
        case Months::OCTOBER:
            month_str = "October";
            break;
        case Months::NOVEMBER:
            month_str = "November";
            break;
        case Months::DECEMBER:
            month_str = "December";
            break;
        default:
            month_str = "Wrong number!";
    }
    
    std::cout << month_str << std::endl;
}

int main()
{
    short input = 0;
    for (;;)
    {
        std::cout << "Input month number: ";
        std::cin >> input;
        if (input == 0)
        {
            break;
        }
        printMonthsName(static_cast<Months>(input));
    } 

    std::cout << "Goodbye!";
    return 0;
}
