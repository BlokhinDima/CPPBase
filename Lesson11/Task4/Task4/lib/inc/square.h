#pragma once
#include "rhombus.h"

#ifdef SHAPESLIBAPI_EXPORT
#define SHAPESLIB_API __declspec(dllexport)
#else
#define SHAPESLIB_API __declspec(dllimport)
#endif

namespace quadrangles
{
    class Square : public Rhombus
    {
    public:
        SHAPESLIB_API Square(int a);
        SHAPESLIB_API bool isCorrect() override;
    };
}
