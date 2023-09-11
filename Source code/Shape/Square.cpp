#include "Square.h"

Square::Square()
{
	_a = INIT_VALUE;
}

Square::Square(int a) {
	_a = a;
}

int Square::getSide()
{
	return _a;
}

float Square::circumference()
{
	float result = _a * 4;
	return result;
}

float Square::area()
{
	float result = _a * _a;
	return result;
}

string Square::toString()
{
	return "Hinh vuong";
}

string Square::data()
{
	stringstream builder;
	builder << "Canh=" << _a;
	return builder.str();
}

