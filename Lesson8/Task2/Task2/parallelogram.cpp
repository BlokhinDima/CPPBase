#include <iostream>
#include "parallelogram.h"
#include "shape_creation_err.h"

quadrangles::Parallelogram::Parallelogram(int a, int b, double A, double B) : Quadrangle(a, b, a, b, A, B, A, B)
{
    name = "Parallelogram";

    if (!isCorrect())
    {
        throw shape_exceptions::ShapeCreationError(
            "Can't create parallelogram. Side \"a\" must be equal to side \"c\", Side \"b\" must be equal to side \"d\,"
            "angle \"A\" must be equal to angle \"C\", angle \"B\" must be equal to angle \"D\"!"
        );
    }

    std::cout << "Type: " << getName() << std::endl;
}

bool quadrangles::Parallelogram::isCorrect()
{
    return Quadrangle::isCorrect() && (a == c) && (b == d) && (A == C) && (B == D);
}
