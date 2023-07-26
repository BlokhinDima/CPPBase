#include "rectangle.h"

quadrangles::Rectangle::Rectangle(int a, int b) : Parallelogram(a, b, 90, 90)
{
    name = "Rectangle";
}

bool quadrangles::Rectangle::isCorrect()
{
    return Parallelogram::isCorrect() && (A == 90) && (B == 90);
}
