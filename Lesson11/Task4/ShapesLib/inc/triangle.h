#pragma once
#include "shapes.h"

#ifdef SHAPESLIBAPI_EXPORT
#define SHAPESLIB_API __declspec(dllexport)
#else
#define SHAPESLIB_API __declspec(dllimport)
#endif

namespace triangles
{
    class Triangle : public shapes::Shape
    {
    public:
        SHAPESLIB_API Triangle(int a, int b, int c, double A, double B, double C);
        SHAPESLIB_API int get_a();
        SHAPESLIB_API int get_b();
        SHAPESLIB_API int get_c();
        SHAPESLIB_API double get_A();
        SHAPESLIB_API double get_B();
        SHAPESLIB_API double get_C();
        SHAPESLIB_API void printSides();
        SHAPESLIB_API void printAngles();
        SHAPESLIB_API void printInfo() override;
        SHAPESLIB_API bool isCorrect() override;

    protected:
        // sides length
        int a;
        int b;
        int c;

        // angles
        double A;
        double B;
        double C;
    };
}