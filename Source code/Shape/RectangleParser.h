#pragma once
#include "IParser.h"
#include "IShape.h"
#include "Rectangle.h"

class RectangleParser : public IParser
{
public:
	/// <summary>
	/// Parse stringstream to create instance of Rectangle pointer
	/// </summary>
	/// <param name="data"></param>
	/// <returns>Instance of Rectangle</returns>
	shared_ptr<IShape> parse(stringstream data);

	/// <summary>
	/// Get class name in string
	/// </summary>
	/// <returns>Rectangle Parser in string</returns>
	string toString();
};

