#include <iostream>
#include "isosceles_triangle.h"
#include "shape_creation_err.h"

triangles::IsoscelesTriangle::IsoscelesTriangle(int a, int b, double A, double B) : Triangle(a, b, a, A, B, A)
{
    name = "Isosceles Triangle";

    if (!isCorrect())
    {
        throw shape_exceptions::ShapeCreationError(
            "Can't create isosceles triangle. Side \"a\" must be equal to side \"c\", angle \"A\" must be equal to angle \"C\"!"
        );
    }

    std::cout << "Type: " << getName() << std::endl;
}

bool triangles::IsoscelesTriangle::isCorrect()
{
    return Triangle::isCorrect() && (a == c) && (A == C);
}

void triangles::IsoscelesTriangle::printInfo()
{
    Triangle::printInfo();
}