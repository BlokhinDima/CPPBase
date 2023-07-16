#pragma once
#include <string>

namespace shapes
{
    class Shape
    {
    public:
        int getSidesNum();
        std::string getName();
        virtual void printInfo();
        virtual bool isCorrect();

    protected:
        int sides = 0;
        std::string name = "Shape";
    };
}