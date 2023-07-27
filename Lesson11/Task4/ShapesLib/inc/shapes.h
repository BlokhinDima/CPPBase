#pragma once
#include <string>
#include "api_macro.h"

namespace shapes
{
    class Shape
    {
    public:
        SHAPESLIB_API int getSidesNum();
        SHAPESLIB_API std::string getName();
        SHAPESLIB_API virtual void printInfo();
        SHAPESLIB_API virtual bool isCorrect();

    protected:
        int sides = 0;
        std::string name = "Shape";
    };
}