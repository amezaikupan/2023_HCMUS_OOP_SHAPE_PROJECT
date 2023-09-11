#pragma once
#include "IParser.h"
#include "IShape.h"
#include "RegularOctagon.h"

class RegularOctagonParser : public IParser
{
public:
	/// <summary>
	/// Parse stringstream to create instance of Regular Octagon pointer
	/// </summary>
	/// <param name="data"></param>
	/// <returns>Instance of Regular Octagon</returns>
	shared_ptr<IShape> parse(stringstream data);

	/// <summary>
	/// Get class name in string
	/// </summary>
	/// <returns>Regular Octagon Parser in string</returns>
	string toString();
};

