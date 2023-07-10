#pragma once
#include "rhombus.h"

namespace quadrangles
{
    class Square : public Rhombus
    {
    public:
        Square(int a);
        bool isCorrect() override;
    };
}
