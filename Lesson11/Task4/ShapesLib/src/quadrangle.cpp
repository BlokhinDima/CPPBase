#include <iostream>
#include "quadrangle.h"

quadrangles::Quadrangle::Quadrangle(int a, int b, int c, int d, double A, double B, double C, double D)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;

    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;

    sides = 4;
    name = "Quadrangle";
}

int quadrangles::Quadrangle::get_a()
{
    return a;
}

int quadrangles::Quadrangle::get_b()
{
    return b;
}

int quadrangles::Quadrangle::get_c()
{
    return c;
}

int quadrangles::Quadrangle::get_d()
{
    return d;
}

double quadrangles::Quadrangle::get_A()
{
    return A;
}

double quadrangles::Quadrangle::get_B()
{
    return B;
}

double quadrangles::Quadrangle::get_C()
{
    return C;
}

double quadrangles::Quadrangle::get_D()
{
    return D;
}

void quadrangles::Quadrangle::printSides()
{
    std::cout << "Sides: "
        << "a=" << get_a() << " "
        << "b=" << get_b() << " "
        << "c=" << get_c() << " "
        << "d=" << get_d() << std::endl;
}

void quadrangles::Quadrangle::printAngles()
{
    std::cout << "Angles: "
        << "A=" << get_A() << " "
        << "B=" << get_B() << " "
        << "C=" << get_C() << " "
        << "D=" << get_D() << std::endl;
}

void quadrangles::Quadrangle::printInfo()
{
    Shape::printInfo();
    printSides();
    printAngles();
}

bool quadrangles::Quadrangle::isCorrect()
{
    return (A + B + C + D == 360) && (sides == 4);
}
