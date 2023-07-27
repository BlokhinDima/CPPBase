#pragma once
#include "triangle.h"
#include "api_macro.h"

namespace triangles
{
    class EquilateralTriangle : public Triangle
    {
    public:
        SHAPESLIB_API EquilateralTriangle(int a);
        SHAPESLIB_API bool isCorrect() override;
    };
}