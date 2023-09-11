#pragma once
#include "IShape.h"
#include <ostream>

using std::ostream, std::endl;

class Circle : public IShape
{
private:
	inline static const float pi = 3.14;

private:
	int _r;

public:
	/// <summary>
	/// Create an instance of class Circle
	/// </summary>
	Circle();

	/// <summary>
	/// Create an instance of class Circle
	/// </summary>
	/// <param name="r">Radius</param>
	Circle(int r);

public:
	/// <summary>
	/// Get circle radius
	/// </summary>
	/// <returns>This circle radius</returns>
	int getRadius();
public:
	/// <summary>
	/// Calculate the circumference of circle
	/// </summary>
	/// <returns>Circumference</returns>
	float circumference();

	/// <summary>
	/// Calculate the area of the circle
	/// </summary>
	/// <returns>Area</returns>
	float area();

	/// <summary>
	/// Get circle' name in string in Vietnames
	/// </summary>
	/// <returns>Cirlce name</returns>
	string toString();

public:
	/// <summary>
	/// Get cirlce's data in string in Vietnamese
	/// </summary>
	/// <returns>Data</returns>
	string data();
};

