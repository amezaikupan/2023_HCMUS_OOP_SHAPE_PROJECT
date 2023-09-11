#include "RegularHexagon.h"

RegularHexagon::RegularHexagon()
{
	_a = INIT_VALUE;
}

RegularHexagon::RegularHexagon(int a) {
	_a = a;
}

int RegularHexagon::getSide()
{
	return _a;
}

float RegularHexagon::circumference() {
	float result = _a * 6;
	return result;
}

float RegularHexagon::area() {
	float result = _a * _a * AREA_CONST;
	return result;
}

string RegularHexagon::toString()
{
	return "Hinh luc giac deu";
}

string RegularHexagon::data()
{
	stringstream builder;
	builder << "Canh=" << _a;
	return builder.str();
}