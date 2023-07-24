#include <iostream>
#include <string>
#include "lib/inc/greeter_lib.h"

int main()
{
	Greeter greeter;
	std::string name;
	std::cout << "Enter your name: ";
	std::cin >> name;
	greeter.greet(name);
	std::cin.get();
	std::cin.get();
	return 0;
}
