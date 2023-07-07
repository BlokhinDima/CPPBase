#include <iostream>


class Shape
{
public:

    int getSidesNum()
    {
        return sides;
    }

protected:
    int sides = 0;
};


class Triangle : public Shape
{
public:

    Triangle()
    {
        sides = 3;
    }
};


class Quadrangle : public Shape
{
public:

    Quadrangle()
    {
        sides = 4;
    }
};


int main()
{
    Shape shape;
    Triangle triangle;
    Quadrangle quadrangle;
    std::cout << "Number of sides:\n";
    std::cout << "Shape: " << shape.getSidesNum() << std::endl;
    std::cout << "Triangle: " << triangle.getSidesNum() << std::endl;
    std::cout << "Quadrangle: " << quadrangle.getSidesNum() << std::endl;
    return 0;
}
