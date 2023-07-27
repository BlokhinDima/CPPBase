#pragma once
#include "triangle.h"
#include "api_macro.h"

namespace triangles
{
    class RightTriangle : public Triangle
    {
    public:
        SHAPESLIB_API RightTriangle(int a, int b, int c, double A, double B);
        SHAPESLIB_API bool isCorrect() override;
    };
}