#pragma once
#include "parallelogram.h"

#ifdef SHAPESLIBAPI_EXPORT
#define SHAPESLIB_API __declspec(dllexport)
#else
#define SHAPESLIB_API __declspec(dllimport)
#endif

namespace quadrangles
{
    class Rectangle : public Parallelogram
    {
    public:
        SHAPESLIB_API Rectangle(int a, int b);
        SHAPESLIB_API bool isCorrect() override;
       
    };
}
