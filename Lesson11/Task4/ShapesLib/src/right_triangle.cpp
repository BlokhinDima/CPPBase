#include "right_triangle.h"

triangles::RightTriangle::RightTriangle(int a, int b, int c, double A, double B) : Triangle(a, b, c, A, B, 90)
{
    name = "Right Triangle";
}

bool triangles::RightTriangle::isCorrect()
{
    return Triangle::isCorrect() && (C == 90);
}
