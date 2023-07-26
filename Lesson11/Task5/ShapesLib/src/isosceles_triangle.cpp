#include "isosceles_triangle.h"

triangles::IsoscelesTriangle::IsoscelesTriangle(int a, int b, double A, double B) : Triangle(a, b, a, A, B, A)
{
    name = "Right Triangle";
}

bool triangles::IsoscelesTriangle::isCorrect()
{
    return Triangle::isCorrect() && (C == 90);
}