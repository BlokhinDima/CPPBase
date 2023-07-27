#pragma once
#include "triangle.h"
#include "api_macro.h"

namespace triangles
{
    class IsoscelesTriangle : public Triangle
    {
    public:
        SHAPESLIB_API IsoscelesTriangle(int a, int b, double A, double B);
        SHAPESLIB_API bool isCorrect() override;
    };
}