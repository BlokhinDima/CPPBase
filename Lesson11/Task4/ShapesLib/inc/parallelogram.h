#pragma once
#include "quadrangle.h"
#include "api_macro.h"

namespace quadrangles
{
    class Parallelogram : public Quadrangle
    {
    public:
        SHAPESLIB_API Parallelogram(int a, int b, double A, double B);
        SHAPESLIB_API bool isCorrect() override;
    };
}
