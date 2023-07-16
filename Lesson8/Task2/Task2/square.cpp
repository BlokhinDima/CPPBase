#include <iostream>
#include "square.h"
#include "shape_creation_err.h"

quadrangles::Square::Square(int a) : Rhombus(a, 90, 90)
{
    name = "Square";

    if (!isCorrect())
    {
        throw shape_exceptions::ShapeCreationError("Can't create square. All angles must be equal to 90 degrees!");
    }

    std::cout << "Type: " << getName() << std::endl;
}

bool quadrangles::Square::isCorrect()
{
    return Rhombus::isCorrect() && (A == 90) && (B == 90);
}
