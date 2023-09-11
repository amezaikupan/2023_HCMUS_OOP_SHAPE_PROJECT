#pragma once
#include "IParser.h"
#include "IShape.h"
#include "Triangle.h"

class TriangleParser : public IParser
{
public:
	/// <summary>
	/// Parse stringstream to create instance of Triangle pointer
	/// </summary>
	/// <param name="data"></param>
	/// <returns>Instance of Triangle</returns>
	shared_ptr<IShape> parse(stringstream data);

	/// <summary>
	/// Get class name in string
	/// </summary>
	/// <returns>Triangle Parser in string</returns>
	string toString();
};

