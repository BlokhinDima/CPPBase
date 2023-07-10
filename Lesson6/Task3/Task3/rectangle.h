#pragma once
#include "parallelogram.h"

namespace quadrangles
{
    class Rectangle : public Parallelogram
    {
    public:
        Rectangle(int a, int b);
        bool isCorrect() override;
       
    };
}
