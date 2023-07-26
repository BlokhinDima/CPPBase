#include "square.h"

quadrangles::Square::Square(int a) : Rhombus(a, 90, 90)
{
    name = "Square";
}

bool quadrangles::Square::isCorrect()
{
    return Rhombus::isCorrect() && (A == 90) && (B == 90);
}
