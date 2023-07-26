#include "rhombus.h"

quadrangles::Rhombus::Rhombus(int a, int A, int B) : Parallelogram(a, a, A, B)
{
    name = "Rhombus";
}

bool quadrangles::Rhombus::isCorrect()
{
    return Parallelogram::isCorrect() && (a == b);
}
