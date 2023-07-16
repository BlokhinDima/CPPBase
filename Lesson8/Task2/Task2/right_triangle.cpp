#include <iostream>
#include "right_triangle.h"
#include "shape_creation_err.h"

triangles::RightTriangle::RightTriangle(int a, int b, int c, double A, double B) : Triangle(a, b, c, A, B, 90)
{
    name = "Right Triangle";

    if (!isCorrect())
    {
        throw shape_exceptions::ShapeCreationError("Can't create right triangle. Angle \"C\" must be equal to 90 degrees!");
    }

    std::cout << "Type: " << getName() << std::endl;
}

bool triangles::RightTriangle::isCorrect()
{
    return Triangle::isCorrect() && (C == 90);
}

void triangles::RightTriangle::printInfo()
{
    Triangle::printInfo();
}