#pragma once
#include "IParser.h"
#include "IShape.h"
#include "RegularPentagon.h"

class RegularPentagonParser
{
public:
	/// <summary>
	/// Parse stringstream to create instance of Regular Pentagon pointer
	/// </summary>
	/// <param name="data"></param>
	/// <returns>Instance of Regular Pentagon</returns>
	shared_ptr<IShape> parse(stringstream data);

	/// <summary>
	/// Get class name in string
	/// </summary>
	/// <returns>Regular Pentagon Parser in string</returns>
	string toString();

};

