#pragma once
#include "IParser.h"
#include "IShape.h"
#include "Square.h"

class SquareParser : public IParser
{
public:
	/// <summary>
	/// Parse stringstream to create instance of Square pointer
	/// </summary>
	/// <param name="data"></param>
	/// <returns>Instance of Square</returns>
	shared_ptr<IShape> parse(stringstream data);

	/// <summary>
	/// Get class name in string
	/// </summary>
	/// <returns>Square Parser in string</returns>
	string toString();
	
};

