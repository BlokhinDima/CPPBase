#include <iostream>
#include <string>


class Shape
{
public:

    int getSidesNum()
    {
        return sides;
    }

    std::string getName()
    {
        return name;
    }

    virtual void printInfo()
    {
        std::cout << std::endl << getName() << ":\n";
        if (isCorrect())
        {
            std::cout << "Correct\n";
        }
        else
        {
            std::cout << "Incorrect\n";
        }
        std::cout << "Number of sides: " << getSidesNum() << std::endl;
    }

    virtual bool isCorrect()
    {
        return sides == 0;
    }

protected:
    int sides = 0;
    std::string name = "Shape";
};


class Triangle : public Shape
{
public:

    Triangle(int a, int b, int c, double A, double B, double C)
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

    int get_a()
    {
        return a;
    }

    int get_b()
    {
        return b;
    }

    int get_c()
    {
        return c;
    }

    double get_A()
    {
        return A;
    }

    double get_B()
    {
        return B;
    }

    double get_C()
    {
        return C;
    }

    void printSides()
    {
        std::cout << "Sides: "
            << "a=" << get_a() << " "
            << "b=" << get_b() << " "
            << "c=" << get_c() << std::endl;
    }

    void printAngles()
    {
        std::cout << "Angles: "
            << "A=" << get_A() << " "
            << "B=" << get_B() << " "
            << "C=" << get_C() << std::endl;
    }

    void printInfo() override
    {
        Shape::printInfo();
        printSides();
        printAngles();
    }

    bool isCorrect() override
    {
        return (A + B + C == 180) && (sides == 3);
    }

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


class RightTriangle : public Triangle
{
public:

    RightTriangle(int a, int b, int c, double A, double B) : Triangle(a, b, c, A, B, 90)
    {
        name = "Right Triangle";
    }

    bool isCorrect() override
    {
        return Triangle::isCorrect() && (C == 90);
    }
};


class IsoscelesTriangle : public Triangle
{
public:

    IsoscelesTriangle(int a, int b, double A, double B) : Triangle(a, b, a, A, B, A)
    {
        name = "Isosceles Triangle";
    }

    bool isCorrect() override
    {
        return Triangle::isCorrect() && (a == c) && (A == C);
    }
};


class EquilateralTriangle : public Triangle
{
public:

    EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60)
    {
        name = "Equilateral Triangle";
    }

    bool isCorrect() override
    {
        return Triangle::isCorrect() && (a == c) && (a == b);
    }
};


class Quadrangle : public Shape
{
public:

    Quadrangle(int a, int b, int c, int d, double A, double B, double C, double D)
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

    int get_a()
    {
        return a;
    }

    int get_b()
    {
        return b;
    }

    int get_c()
    {
        return c;
    }

    int get_d()
    {
        return d;
    }

    double get_A()
    {
        return A;
    }

    double get_B()
    {
        return B;
    }

    double get_C()
    {
        return C;
    }

    double get_D()
    {
        return D;
    }

    void printSides()
    {
        std::cout << "Sides: "
            << "a=" << get_a() << " "
            << "b=" << get_b() << " "
            << "c=" << get_c() << " "
            << "d=" << get_d() << std::endl;
    }

    void printAngles()
    {
        std::cout << "Angles: "
            << "A=" << get_A() << " "
            << "B=" << get_B() << " "
            << "C=" << get_C() << " "
            << "D=" << get_D() << std::endl;
    }

    void printInfo() override
    {
        Shape::printInfo();
        printSides();
        printAngles();
    }

    bool isCorrect() override
    {
        return (A + B + C + D == 360) && (sides == 4);
    }

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


class Parallelogram : public Quadrangle
{
public:

    Parallelogram(int a, int b, double A, double B) : Quadrangle(a, b, a, b, A, B, A, B)
    {
        name = "Parallelogram";
    }

    bool isCorrect() override
    {
        return Quadrangle::isCorrect() && (a == c) && (b == d) && (A == C) && (B == D);
    }
};


class Rectangle : public Parallelogram
{
public:

    Rectangle(int a, int b) : Parallelogram(a, b, 90, 90)
    {
        name = "Rectangle";
    }

    bool isCorrect() override
    {
        return Parallelogram::isCorrect() && (A == 90) && (B == 90);
    }
};


class Rhombus : public Parallelogram
{
public:

    Rhombus(int a, int A, int B) : Parallelogram(a, a, A, B)
    {
        name = "Rhombus";
    }

    bool isCorrect() override
    {
        return Parallelogram::isCorrect() && (a == b);
    }
};


class Square : public Rhombus
{
public:

    Square(int a) : Rhombus(a, 90, 90)
    {
        name = "Square";
    }

    bool isCorrect() override
    {
        return Rhombus::isCorrect() && (A == 90) && (B == 90);
    }
};


void printShapeInfo(Shape* shape)
{
    shape->printInfo();
}


int main()
{

    Shape shape;
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle right_triangle(10, 20, 30, 50, 60);
    RightTriangle right_triangle2(10, 20, 30, 50, 40);
    IsoscelesTriangle isosceles_triangle(10, 20, 50, 60);
    EquilateralTriangle equilateral_triangle(30);

    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rectangle rectangle(20, 30);
    Rhombus rhombus(30, 30, 40);
    Square square(20);

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
