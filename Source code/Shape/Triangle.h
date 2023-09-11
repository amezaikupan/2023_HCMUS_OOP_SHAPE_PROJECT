#pragma once
#include "IShape.h"
#include <cmath>
#include <ostream>

using std::sqrt;
using std::ostream, std::endl;

class Triangle : public IShape
{
private:
	int _a;
	int _b;
	int _c;

public:
	/// <summary>
	/// Create an instance of Triange class
	/// </summary>
	Triangle();

	/// <summary>
	/// Create an instance of Triange class
	/// </summary>
	/// <param name="a">Side a</param>
	/// <param name="b">Side b</param>
	/// <param name="c">Side c</param>
	Triangle(int a, int b, int c);

public:
	/// <summary>
	/// Get side A of triangle
	/// </summary>
	/// <returns>Side A of triangle</returns>
	int getSideA();

	/// <summary>
	/// Get side B of triangle
	/// </summary>
	/// <returns>Side B of triangle</returns>
	int getSideB();

	/// <summary>
	/// Get side C of triangle
	/// </summary>
	/// <returns>Side C of triangle</returns>
	int getSideC();
public:

	/// <summary>
	/// Calculate circumference of Triangle object
	/// </summary>
	/// <returns>Circumference of Triangle</returns>
	float circumference();

	/// <summary>
	/// Calculate area of Triangle object
	/// </summary>
	/// <returns>Area of Triangle</returns>
	float area();

	/// <summary>
	/// Get name of class Triangle in string in Vietnamese
	/// </summary>
	/// <returns>Name of Triangle class</returns>
	string toString();

public:

	/// <summary>
	/// Get data (sides' length) of Regular Hexagon object in string in Vietnamese
	/// </summary>
	/// <returns>Sides length of Triangle object</returns>
	string data();
};

