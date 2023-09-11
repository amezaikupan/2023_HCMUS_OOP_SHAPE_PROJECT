#include "Rectangle.h"

Rectangle::Rectangle()
{
	_w = INIT_VALUE;
	_h = INIT_VALUE;
}

Rectangle::Rectangle(int w, int h) {
	_w = w;
	_h = h;
}

int Rectangle::getWidth()
{
	return _w;
}

int Rectangle::getHeight()
{
	return _h;
}

float Rectangle::circumference() {
	float result = _w * 2 + _h * 2;
	return result;
}

float Rectangle::area() {
	float result = _w * _h;
	return result;
}

string Rectangle::toString() {
	return "Hinh chu nhat";
}

string Rectangle::data()
{
	stringstream builder;
	builder << "Rong=" << _w << ", Cao=" << _h;
	return builder.str();
}
