#include"MathFunctions.h"

float MathFunctions::AddIntegers()
{
	tuple<float, float> c = GetInput();
	return get<0>(c) + get<1>(c);
}

float MathFunctions::Subtract(float a, float b)
{
	return a - b;
}

float MathFunctions::DivideIntegers(float a, float b)
{
	return a / b;
}

float MathFunctions::MultiplyIntegers(float a, float b)
{
	return a * b;
}

tuple<float, float> MathFunctions::GetInput()
{
	float a, b;
	cout << "What is the first number?" << endl;
	cin >> a;
	cout << "What is the second number?" << endl;
	cin >> b;
	return make_tuple(a, b);
}