#pragma once
#include <string>

using std::string;

class Object
{
public:
	/// <summary>
	/// Get class name in string
	/// </summary>
	/// <returns>Class name in string</returns>
	virtual string toString() = 0;
};

