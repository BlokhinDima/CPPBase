#pragma once
#include "triangle.h"

#ifdef SHAPESLIBAPI_EXPORT
#define SHAPESLIB_API __declspec(dllexport)
#else
#define SHAPESLIB_API __declspec(dllimport)
#endif

namespace triangles
{
    class IsoscelesTriangle : public Triangle
    {
    public:
        SHAPESLIB_API IsoscelesTriangle(int a, int b, double A, double B);
        SHAPESLIB_API bool isCorrect() override;
    };
}