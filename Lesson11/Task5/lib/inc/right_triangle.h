#pragma once
#include "triangle.h"

#ifdef SHAPESLIBAPI_EXPORT
#define SHAPESLIB_API __declspec(dllexport)
#else
#define SHAPESLIB_API __declspec(dllimport)
#endif

namespace triangles
{
    class RightTriangle : public Triangle
    {
    public:
        SHAPESLIB_API RightTriangle(int a, int b, int c, double A, double B);
        SHAPESLIB_API bool isCorrect() override;
    };
}