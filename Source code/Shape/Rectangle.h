#pragma once
#include "IShape.h"
#include <ostream>

using std::ostream, std::endl;

class Rectangle : public IShape
{
private:
	int _w;
	int _h;

public:
	/// <summary>
	/// Create an instance of Rectangle class
	/// </summary>
	Rectangle();

	/// <summary>
	/// Create an instance of Rectangle class
	/// </summary>
	/// <param name="w">Width of rectangle</param>
	/// <param name="h">Height of rectangle</param>
	Rectangle(int w, int h);

public:
	/// <summary>
	/// Get width of rectangle
	/// </summary>
	/// <returns>Width of rectangle</returns>
	int getWidth();

	/// <summary>
	/// Get height of rectangle
	/// </summary>
	/// <returns>Height of rectangle</returns>
	int getHeight();

public:
	/// <summary>
	/// Calculate circumference of rectangle
	/// </summary>
	/// <returns>Circumference of rectangle</returns>
	float circumference();

	/// <summary>
	/// Calculate area of rectangle
	/// </summary>
	/// <returns>Area of rectangle</returns>
	float area();

	/// <summary>
	/// Get class name in string in Vietnamese
	/// </summary>
	/// <returns>Class name</returns>
	string toString();

public:
	/// <summary>
	/// Get width and height data in string in Vietnamese
	/// </summary>
	/// <returns>Width and height</returns>
	string data();
};

