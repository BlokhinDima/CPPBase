#include <iostream>
#include "shapes.h"

int shapes::Shape::getSidesNum()
{
    return sides;
}

std::string shapes::Shape::getName()
{
    return name;
}

void shapes::Shape::printInfo()
{
    std::cout << std::endl << getName() << ":\n";
    if (isCorrect())
    {
        std::cout << "Correct\n";
    }
    else
    {
        std::cout << "Incorrect\n";
    }
    std::cout << "Number of sides: " << getSidesNum() << std::endl;
}

bool shapes::Shape::isCorrect()
{
    return sides == 0;
}