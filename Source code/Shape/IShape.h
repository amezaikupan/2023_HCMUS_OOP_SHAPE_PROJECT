#pragma once
#include "Object.h"
#include <sstream>

using std::stringstream;

class IShape : public Object
{
protected:
	inline static const int INIT_VALUE = 1;
public:
	/// <summary>
	/// Get circumference of IShape
	/// </summary>
	/// <returns>Circumference of IShape</returns>
	virtual float circumference() = 0;

	/// <summary>
	/// Get area of IShape
	/// </summary>
	/// <returns>Area of IShape</returns>
	virtual float area() = 0;

	/// <summary>
	/// Get class name in string
	/// </summary>
	/// <returns>Class name in string</returns>
	string toString() {
		return "Shape";
	}

public:
	/// <summary>
	/// Get object data
	/// </summary>
	/// <returns>Data of object in string</returns>
	virtual string data() = 0;
};

