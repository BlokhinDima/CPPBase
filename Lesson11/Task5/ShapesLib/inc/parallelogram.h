#pragma once
#include "quadrangle.h"

namespace quadrangles
{
    class Parallelogram : public Quadrangle
    {
    public:
        Parallelogram(int a, int b, double A, double B);
        bool isCorrect() override;
    };
}
