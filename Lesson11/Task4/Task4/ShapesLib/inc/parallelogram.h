#pragma once
#include "quadrangle.h"

#ifdef SHAPESLIBAPI_EXPORT
#define SHAPESLIB_API __declspec(dllexport)
#else
#define SHAPESLIB_API __declspec(dllimport)
#endif

namespace quadrangles
{
    class Parallelogram : public Quadrangle
    {
    public:
        SHAPESLIB_API Parallelogram(int a, int b, double A, double B);
        SHAPESLIB_API bool isCorrect() override;
    };
}
