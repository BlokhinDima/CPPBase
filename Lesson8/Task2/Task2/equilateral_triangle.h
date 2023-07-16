#pragma once
#include "triangle.h"

namespace triangles
{
    class EquilateralTriangle : public Triangle
    {
    public:
        EquilateralTriangle(int a);
        bool isCorrect() override;
        void printInfo() override;
    };
}