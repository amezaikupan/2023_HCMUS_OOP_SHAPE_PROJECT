#pragma once
#include "IShape.h"
#include <ostream>

using std::ostream, std::endl;

class Square : public IShape
{
private:
	int _a;

public:
	/// <summary>
	/// Create an instance of Square class
	/// </summary>
	Square();

	/// <summary>
	/// Create an instance of Square class
	/// </summary>
	/// <param name="a">Side length</param>
	Square(int a);
	
public:
	/// <summary>
	/// Get side of square
	/// </summary>
	/// <returns>Side of square</returns>
	int getSide();

public:

	/// <summary>
	/// Calculate circumference of Square object
	/// </summary>
	/// <returns>Circumference of Square</returns>
	float circumference();

	/// <summary>
	/// Calculate area of Square object
	/// </summary>
	/// <returns>Area of Square</returns>
	float area();

	/// <summary>
	/// Get name of class Square in string in Vietnamese
	/// </summary>
	/// <returns>Name of Square</returns>
	string toString();
public:

	/// <summary>
	/// Get data (side length) of Square object in string in Vietnamese
	/// </summary>
	/// <returns>Side of Square</returns>
	string data();
};

