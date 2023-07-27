#pragma once
#include "parallelogram.h"
#include "api_macro.h"

namespace quadrangles
{
    class Rhombus : public Parallelogram
    {
    public:

        SHAPESLIB_API Rhombus(int a, int A, int B);
        SHAPESLIB_API bool isCorrect() override;
    };
}
