#pragma once
#include "IShape.h"
#include <ostream>

using std::ostream, std::endl;

class RegularPentagon : public IShape
{
private:
	inline static const float AREA_CONST = 1.72;
private:
	int _a;
public:
	/// <summary>
	/// Create an instance of Regular Pentagon
	/// </summary>
	RegularPentagon();

	/// <summary>
	/// Create an instance of Regular Pentagon
	/// </summary>
	/// <param name="a">Side length</param>
	RegularPentagon(int a);
public:
	/// <summary>
	/// Get side of regular pentagon
	/// </summary>
	/// <returns>Side of regular pentagon</returns>
	int getSide();
public:
	/// <summary>
	/// Calculate the circumference of Regular Pentagon object
	/// </summary>
	/// <returns>Circumference of Regular Pentagon</returns>
	float circumference();

	/// <summary>
	/// Calculate area of Regular Pentagon object
	/// </summary>
	/// <returns>Area of Regular Pentagon</returns>
	float area();

	/// <summary>
	/// Get name of class Regular Pentagon in string int Vietnamese
	/// </summary>
	/// <returns>Name of Regular Pentagon</returns>
	string toString();
public:

	/// <summary>
	/// Get data (side length) of Regular Pentagon object in Vietnamese
	/// </summary>
	/// <returns>Side of Regular Pentagon object</returns>
	string data();
};

