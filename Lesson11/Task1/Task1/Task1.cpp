#include <iostream>
#include <string>
#include "lib/greeter_lib.h"

int main()
{
	Greeter greeter;
	std::string name;
	std::cout << "Enter your name: ";
	std::cin >> name;
	greeter.greet(name);
	return 0;
}
