#pragma once
#include "pch.h"
#include <string>
#include <tuple>
#include <iostream>

using namespace std;

class MathFunctions
{
public:

	static float AddIntegers();
	static float Subtract(float a, float b);
	static float DivideIntegers(float a, float b);
	static float MultiplyIntegers(float a, float b);
private:
	static std::tuple<float, float> GetInput();
};
