#include <iostream>
#include "rectangle.h"
#include "shape_creation_err.h"

quadrangles::Rectangle::Rectangle(int a, int b) : Parallelogram(a, b, 90, 90)
{
    name = "Rectangle";

    if (!isCorrect())
    {
        throw shape_exceptions::ShapeCreationError("Can't create rectangle. All angles must be equal to 90 degrees!");
    }

    std::cout << "Type: " << getName() << std::endl;
}

bool quadrangles::Rectangle::isCorrect()
{
    return Parallelogram::isCorrect() && (A == 90) && (B == 90);
}
