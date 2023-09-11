#pragma once
#include "IParser.h"
#include "IShape.h"
#include "RegularHexagon.h"

class RegularHexagonParser : public IParser
{
public:
	/// <summary>
	/// Parse stringstream to create instance of Regular Hexagon pointer
	/// </summary>
	/// <param name="data"></param>
	/// <returns>Instance of Regular Hexagon</returns>
	shared_ptr<IShape> parse(stringstream data);

	/// <summary>
	/// Get class name in string
	/// </summary>
	/// <returns>Regular Hexagon Parser in string</returns>
	string toString();
};

