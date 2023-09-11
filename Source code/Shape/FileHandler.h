#pragma once
#include "IShape.h"
#include "ParserFactory.h"
#include "PrintHandler.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>

using std::vector;
using std::ifstream, std::ofstream, std::getline;
using std::stringstream;
using std::cout, std::endl;

class FileHandler
{
public:
	/// <summary>
	/// Read from file to create a vector of IShape objects
	/// </summary>
	/// <param name="input">Filename</param>
	/// <param name="factory">Factory of parsers</param>
	/// <returns>Vector of IShapes objects</returns>
	static vector<shared_ptr<IShape>> read(string input, ParserFactory& factory);
};

