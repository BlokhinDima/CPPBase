#include "equilateral_triangle.h"

triangles::EquilateralTriangle::EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60)
{
    name = "Equilateral Triangle";
}

bool triangles::EquilateralTriangle::isCorrect()
{
    return Triangle::isCorrect() && (a == c) && (a == b);
}