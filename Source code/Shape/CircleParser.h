#pragma once
#include "IParser.h"
#include "IShape.h"
#include "Circle.h"

class CircleParser : public IParser
{
public:
	/// <summary>
	/// Parse stringstream to create instance of Circle pointer
	/// </summary>
	/// <param name="data">Data as stringstream</param>
	/// <returns>Instance of Circle</returns>
	shared_ptr<IShape> parse(stringstream data);

	/// <summary>
	/// Get class name in string
	/// </summary>
	/// <returns>String of class name</returns>
	string toString();
};

