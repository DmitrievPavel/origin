#pragma once
#include <iostream>
#ifdef LEAVERDLL_EXPORTS
#define LEAVERDLL_API __declspec(dllexport)
#else
#define LEAVERDLL_API __declspec(dllimport)
#endif

class Leaver {
public:
	LEAVERDLL_API std::string leave(std::string name);
};