#include "Circle.h"

Circle::Circle()
{
	_r = INIT_VALUE;
}
Circle::Circle(int r) {
	_r = r;
}

int Circle::getRadius()
{
	return _r;
}

float Circle::circumference()
{
	float result = 2 * _r * pi;
	return result;
}

float Circle::area() {
	float result = _r * _r * pi;
	return result;
}

string Circle::toString() {
	return "Hinh tron";
}

string Circle::data()
{
	stringstream buildier;
	buildier << "Ban kinh=" << _r;

	return buildier.str();
}
