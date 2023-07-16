#pragma once
#include "parallelogram.h"

namespace quadrangles
{
    class Rhombus : public Parallelogram
    {
    public:

        Rhombus(int a, int A, int B);
        bool isCorrect() override;
    };
}
