#pragma once
#include "parallelogram.h"
#include "api_macro.h"

namespace quadrangles
{
    class Rectangle : public Parallelogram
    {
    public:
        SHAPESLIB_API Rectangle(int a, int b);
        SHAPESLIB_API bool isCorrect() override;
       
    };
}
