#pragma once
#include "parallelogram.h"

#ifdef SHAPESLIBAPI_EXPORT
#define SHAPESLIB_API __declspec(dllexport)
#else
#define SHAPESLIB_API __declspec(dllimport)
#endif

namespace quadrangles
{
    class Rhombus : public Parallelogram
    {
    public:
        SHAPESLIB_API Rhombus(int a, int A, int B);
        SHAPESLIB_API bool isCorrect() override;
    };
}
