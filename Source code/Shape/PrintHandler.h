#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include <iomanip>
#include <string>

using std::cout, std::endl;
using std::vector;
using std::shared_ptr, std::make_shared;
using std::fixed, std::setprecision;
using std::setw, std::left, std::right;
using std::to_string;

#include "IShape.h"

class PrintHandler
{
public: 
	/// <summary>
	/// Print list of IShape objects to console
	/// </summary>
	/// <param name="list">Vector of IShape objects</param>
	static void printShapeList(vector<shared_ptr<IShape>>list);

	/// <summary>
	/// Print list of IShape objects with circumference and area to console
	/// </summary>
	/// <param name="list">Vector of IShape objects</param>
	static void printShapeListWithData(vector<shared_ptr<IShape>> list);

};

