#include <iostream>
#include <string>
#include "greeter_lib.h"

void Greeter::greet(std::string str)
{
	std::cout << "Hello, " + str + "!" << std::endl;
}
