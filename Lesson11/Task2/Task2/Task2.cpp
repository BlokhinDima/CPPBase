#include <iostream>
#include <string>
#include "lib/leaver_lib.h"

int main()
{
    Leaver leaver;
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    leaver.leave(name);
    return 0;
}
