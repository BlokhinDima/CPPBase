#pragma once
#include <string>

#ifdef SHAPESLIBAPI_EXPORT
#define SHAPESLIB_API __declspec(dllexport)
#else
#define SHAPESLIB_API __declspec(dllimport)
#endif

namespace shapes
{
    class Shape
    {
    public:
        SHAPESLIB_API int getSidesNum();
        SHAPESLIB_API std::string getName();
        SHAPESLIB_API virtual void printInfo();
        SHAPESLIB_API virtual bool isCorrect();

    protected:
        int sides = 0;
        std::string name = "Shape";
    };
}