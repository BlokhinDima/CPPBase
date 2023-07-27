#pragma once
#include "shapes.h"

namespace triangles
{
    class Triangle : public shapes::Shape
    {
    public:
        Triangle(int a, int b, int c, double A, double B, double C);
        int get_a();
        int get_b();
        int get_c();
        double get_A();
        double get_B();
        double get_C();
        void printSides();
        void printAngles();
        void printInfo() override;
        bool isCorrect() override;

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