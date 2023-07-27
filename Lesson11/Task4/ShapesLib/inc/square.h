#pragma once
#include "rhombus.h"
#include "api_macro.h"

namespace quadrangles
{
    class Square : public Rhombus
    {
    public:
        SHAPESLIB_API Square(int a);
        SHAPESLIB_API bool isCorrect() override;
    };
}
