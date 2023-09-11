#include "Triangle.h"

Triangle::Triangle()
{
	_a = INIT_VALUE;
	_b = INIT_VALUE;
	_c = INIT_VALUE;
}

Triangle::Triangle(int a, int b, int c) {
	_a = a;
	_b = b;
	_c = c;
}

int Triangle::getSideA()
{
	return _a;
}

int Triangle::getSideB()
{
	return _b;
}

int Triangle::getSideC()
{
	return _c;
}

float Triangle::circumference() {
	float result = _a + _b + _c;
	return result;
}

float Triangle::area() {
	int p = _a + _b + _c;
	float result = sqrt(p * (p - _a) * (p - _b) * (p - _c));
	return result;
}

string Triangle::toString() {
	return "Hinh tam giac";
}

string Triangle::data()
{
	stringstream builder;
	builder << "CanhA=" << _a << ", CanhB=" << _b << ", CanhC=" << _c;
	return builder.str();
}
