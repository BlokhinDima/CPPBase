#include <iostream>
#include "shapes.h"
#include "shape_creation_err.h"

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
    std::cout << getName() << " created.\n";
    std::cout << "Number of sides: " << getSidesNum() << std::endl;
}

bool shapes::Shape::isCorrect()
{
    return sides == 0;
}