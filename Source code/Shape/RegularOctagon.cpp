#include "RegularOctagon.h"

RegularOctagon::RegularOctagon()
{
	_a = INIT_VALUE;
}

RegularOctagon::RegularOctagon(int a) {
	_a = a;
}

int RegularOctagon::getSide()
{
	return _a;
}

float RegularOctagon::circumference() {
	float result = _a * 8;
	return result;
}

float RegularOctagon::area() {
	float result = _a * _a * AREA_CONST;
	return result;
}

string RegularOctagon::toString() {
	return "Hinh thap giac deu";
}

string RegularOctagon::data()
{
	stringstream builder;
	builder << "Canh=" << _a;
	return builder.str();
}

