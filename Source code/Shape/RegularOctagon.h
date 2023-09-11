#pragma once
#include "IShape.h"
#include <ostream>

using std::ostream, std::endl;

class RegularOctagon : public IShape
{
private:
	inline static const float AREA_CONST = 4.828;
private:
	int _a;
public:
	/// <summary>
	/// Create an instance of Regular Octagon
	/// </summary>
	RegularOctagon();

	/// <summary>
	/// Create an instance of Regular Octagon
	/// </summary>
	/// <param name="a">Side length</param>
	RegularOctagon(int a);
public:

	/// <summary>
	/// Get side of regular Octagon
	/// </summary>
	/// <returns>Side of regular Octagon</returns>
	int getSide();
public:
	/// <summary>
	/// Calculate the circumference of Regular Octagon object
	/// </summary>
	/// <returns>Circumference of Regular Octagon</returns>
	float circumference();

	/// <summary>
	/// Calculate area of the Regular Octagon object
	/// </summary>
	/// <returns>Area of Regular Octagon</returns>
	float area();

	/// <summary>
	/// Get class name in string in Vietnamese
	/// </summary>
	/// <returns>Regular Octagon in Vietnamese</returns>
	string toString();
public:

	/// <summary>
	/// Get object data (side length) in string in Vietnamese
	/// </summary>
	/// <returns>Regular Octagon side length in string</returns>
	string data();
};

