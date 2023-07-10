#include <iostream>
#include "shapes.h"
#include "triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "quadrangle.h"
#include "parallelogram.h"
#include "rectangle.h"
#include "rhombus.h"
#include "square.h"


void printShapeInfo(shapes::Shape* shape)
{
    shape->printInfo();
}


int main()
{
    shapes::Shape shape;

    triangles::Triangle triangle(10, 20, 30, 50, 60, 70);
    triangles::RightTriangle right_triangle(10, 20, 30, 50, 60);
    triangles::RightTriangle right_triangle2(10, 20, 30, 50, 40);
    triangles::IsoscelesTriangle isosceles_triangle(10, 20, 50, 60);
    triangles::EquilateralTriangle equilateral_triangle(30);

    quadrangles::Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    quadrangles::Parallelogram parallelogram(20, 30, 30, 40);
    quadrangles::Rectangle rectangle(20, 30);
    quadrangles::Rhombus rhombus(30, 30, 40);
    quadrangles::Square square(20);

    printShapeInfo(&shape);
    printShapeInfo(&triangle);
    printShapeInfo(&right_triangle);
    printShapeInfo(&right_triangle2);
    printShapeInfo(&isosceles_triangle);
    printShapeInfo(&equilateral_triangle);
    printShapeInfo(&quadrangle);
    printShapeInfo(&parallelogram);
    printShapeInfo(&rectangle);
    printShapeInfo(&rhombus);
    printShapeInfo(&square);
    return 0;
}
