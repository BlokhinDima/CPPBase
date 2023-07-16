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
#include "shape_creation_err.h"


void printShapeInfo(shapes::Shape* shape)
{
    shape->printInfo();
}


int main()
{
    try
    {
        triangles::Triangle triangle(10, 20, 30, 50, 60, 70);

        // Incorrect shape
        //triangles::RightTriangle right_triangle(10, 20, 30, 50, 60); 

        triangles::RightTriangle right_triangle2(10, 20, 30, 50, 40);

        // Incorrect shape
        //triangles::IsoscelesTriangle isosceles_triangle(10, 20, 50, 60); 

        triangles::EquilateralTriangle equilateral_triangle(30);

        // Incorrect shape
        //quadrangles::Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);

        // Incorrect shape
        //quadrangles::Parallelogram parallelogram(20, 30, 30, 40);

        quadrangles::Rectangle rectangle(20, 30);

        // Incorrect shape
        quadrangles::Rhombus rhombus(30, 30, 40);

        quadrangles::Square square(20);

        return 0;
            
    }
    catch (const shape_exceptions::ShapeCreationError& ex)
    {
        std::cout << ex.what() << std::endl;
    }
}
