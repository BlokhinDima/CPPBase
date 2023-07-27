#pragma once
#include "shapes.h"
#include "api_macro.h"

namespace quadrangles
{
    class Quadrangle : public shapes::Shape
    {
    public:
        SHAPESLIB_API Quadrangle(int a, int b, int c, int d, double A, double B, double C, double D);
        SHAPESLIB_API int get_a();
        SHAPESLIB_API int get_b();
        SHAPESLIB_API int get_c();
        SHAPESLIB_API int get_d();
        SHAPESLIB_API double get_A();
        SHAPESLIB_API double get_B();
        SHAPESLIB_API double get_C();
        SHAPESLIB_API double get_D();
        SHAPESLIB_API void printSides();
        SHAPESLIB_API void printAngles();
        SHAPESLIB_API void printInfo() override;
        SHAPESLIB_API bool isCorrect() override;
       
    protected:
        // sides length
        int a;
        int b;
        int c;
        int d;

        // angles
        double A;
        double B;
        double C;
        double D;

    };
}