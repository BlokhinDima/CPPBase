#include <iostream>
#include "rhombus.h"
#include "shape_creation_err.h"

quadrangles::Rhombus::Rhombus(int a, int A, int B) : Parallelogram(a, a, A, B)
{
    name = "Rhombus";

    if (!isCorrect())
    {
        throw shape_exceptions::ShapeCreationError("Can't create rhombus. All sides must be equal!");
    }

    std::cout << "Type: " << getName() << std::endl;
}

bool quadrangles::Rhombus::isCorrect()
{
    return Parallelogram::isCorrect() && (a == b);
}
