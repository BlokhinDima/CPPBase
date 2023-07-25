#include <iostream>
#include <string>
#include "leaver_lib.h"

int main()
{
    Leaver leaver;
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    leaver.leave(name);
    std::cin.get();
    std::cin.get();
    return 0;
}
