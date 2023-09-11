#pragma once
#include "IShape.h"
#include <ostream>

using std::ostream, std::endl;

class RegularHexagon : public IShape
{
private:
	inline static const float AREA_CONST = 2.598;
private:
	int _a;
public:
	/// <summary>
	/// Create an instance of Regular Hexagon class
	/// </summary>
	RegularHexagon();

	/// <summary>
	/// Create an instance of Regular Hexagon class
	/// </summary>
	/// <param name="a">Side length</param>
	RegularHexagon(int a);
public:
	/// <summary>
	/// Get side of regular hexagon
	/// </summary>
	/// <returns>Regular hexagon</returns>
	int getSide();

public:
	/// <summary>
	/// Calculate circumference of Regular Hexagon object
	/// </summary>
	/// <returns>Circumference of Regular Hexagon</returns>
	float circumference();

	/// <summary>
	/// Calculate area of Regular Hexagon object
	/// </summary>
	/// <returns>Area of Regular Hexagon</returns>
	float area();

	/// <summary>
	/// Get name of class Regular Hexagon in string in Vietnamese
	/// </summary>
	/// <returns>Name of Regular Hexagon class</returns>
	string toString();
public:

	/// <summary>
	/// Get data (side length) of Regular Hexagon object in string in Vietnamese
	/// </summary>
	/// <returns>Side length of Regular Hexagon object</returns>
	string data();
};

