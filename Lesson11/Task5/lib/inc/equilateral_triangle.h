#pragma once
#include "triangle.h"

#ifdef SHAPESLIBAPI_EXPORT
#define SHAPESLIB_API __declspec(dllexport)
#else
#define SHAPESLIB_API __declspec(dllimport)
#endif

namespace triangles
{
    class EquilateralTriangle : public Triangle
    {
    public:
        SHAPESLIB_API EquilateralTriangle(int a);
        SHAPESLIB_API bool isCorrect() override;
    };
}