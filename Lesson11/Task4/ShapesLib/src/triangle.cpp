#include <iostream>
#include "triangle.h"

triangles::Triangle::Triangle(int a, int b, int c, double A, double B, double C)
{
    this->a = a;
    this->b = b;
    this->c = c;

    this->A = A;
    this->B = B;
    this->C = C;

    sides = 3;
    name = "Trinagle";
}

int triangles::Triangle::get_a()
{
    return a;
}

int triangles::Triangle::get_b()
{
    return b;
}

int triangles::Triangle::get_c()
{
    return c;
}

double triangles::Triangle::get_A()
{
    return A;
}

double triangles::Triangle::get_B()
{
    return B;
}

double triangles::Triangle::get_C()
{
    return C;
}

void triangles::Triangle::printSides()
{
    std::cout << "Sides: "
        << "a=" << get_a() << " "
        << "b=" << get_b() << " "
        << "c=" << get_c() << std::endl;
}

void triangles::Triangle::printAngles()
{
    std::cout << "Angles: "
        << "A=" << get_A() << " "
        << "B=" << get_B() << " "
        << "C=" << get_C() << std::endl;
}

void triangles::Triangle::printInfo()
{
    Shape::printInfo();
    printSides();
    printAngles();
}

bool triangles::Triangle::isCorrect()
{
    return (A + B + C == 180) && (sides == 3);
}
