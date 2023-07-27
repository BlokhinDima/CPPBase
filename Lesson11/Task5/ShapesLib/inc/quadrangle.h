#pragma once
#include "shapes.h"

namespace quadrangles
{
    class Quadrangle : public shapes::Shape
    {
    public:
        Quadrangle(int a, int b, int c, int d, double A, double B, double C, double D);
        int get_a();
        int get_b();
        int get_c();
        int get_d();
        double get_A();
        double get_B();
        double get_C();
        double get_D();
        void printSides();
        void printAngles();
        void printInfo() override;
        bool isCorrect() override;
       
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