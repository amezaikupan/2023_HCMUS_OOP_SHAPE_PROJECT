#pragma once
#include "Object.h"
#include "IShape.h"
#include <memory>
#include <sstream>
#include <iostream>
#include <exception>

using std::shared_ptr, std::make_shared;
using std::stringstream;
using std::getline;
using std::exception;

class IParser : public Object
{
public:
	/// <summary>
	/// Parse stringstream to create an IShape object
	/// </summary>
	/// <param name="">Stringstream of IShape data</param>
	/// <returns>Instance of IShape object</returns>
	virtual shared_ptr<IShape> parse(stringstream name) noexcept(false) = 0;
	
	/// <summary>
	/// Get class name in string
	/// </summary>
	/// <returns>String of class name</returns>
	string toString() { return "IParser"; }
};
