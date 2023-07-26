#include "parallelogram.h"

quadrangles::Parallelogram::Parallelogram(int a, int b, double A, double B) : Quadrangle(a, b, a, b, A, B, A, B)
{
    name = "Parallelogram";
}

bool quadrangles::Parallelogram::isCorrect()
{
    return Quadrangle::isCorrect() && (a == c) && (b == d) && (A == C) && (B == D);
}
