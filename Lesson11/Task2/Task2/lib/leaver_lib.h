#pragma once

#include <string>

#define LEAVERLIBDYNAMIC_EXPORTS
#ifdef LEAVERLIBDYNAMIC_EXPORTS
#define LEAVERLIB_API __declspec(dllexport)
#else
#define LEAVERLIB_API __declspec(dllimport)
#endif

class Leaver
{
public:
	LEAVERLIB_API void leave(std::string str);
};
