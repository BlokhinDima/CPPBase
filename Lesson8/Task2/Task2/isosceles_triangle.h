#pragma once
#include "triangle.h"

namespace triangles
{
    class IsoscelesTriangle : public Triangle
    {
    public:
        IsoscelesTriangle(int a, int b, double A, double B);
        bool isCorrect() override;
        void printInfo() override;
    };
}