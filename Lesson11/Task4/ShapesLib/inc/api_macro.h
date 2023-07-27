#pragma once

#ifdef SHAPESLIB_EXPORTS
#define SHAPESLIB_API __declspec(dllexport)
#else
#define SHAPESLIB_API __declspec(dllimport)
#endif
