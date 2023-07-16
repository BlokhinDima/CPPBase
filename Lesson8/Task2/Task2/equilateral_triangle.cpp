#include <iostream>
#include "equilateral_triangle.h"
#include "shape_creation_err.h"

triangles::EquilateralTriangle::EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60)
{
    name = "Equilateral Triangle";

    if (!isCorrect())
    {
        throw shape_exceptions::ShapeCreationError("Can't create equilateral triangle. All sides must have equal length!");
    }

    std::cout << "Type: " << getName() << std::endl;
}

bool triangles::EquilateralTriangle::isCorrect()
{
    return Triangle::isCorrect() && (a == c) && (a == b);
}

void triangles::EquilateralTriangle::printInfo()
{
    Triangle::printInfo();
}