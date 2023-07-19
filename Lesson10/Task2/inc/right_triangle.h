#pragma once
#include "triangle.h"

namespace triangles
{
    class RightTriangle : public Triangle
    {
    public:
        RightTriangle(int a, int b, int c, double A, double B);
        bool isCorrect() override;
    };
}