#pragma once
#include "Object.h"
#include "IParser.h"
#include <map>

using std::map;

class ParserFactory : public Object
{
private:
	map <string, shared_ptr<IParser>> _prototypes;

	/// <summary>
	/// Instance of factory (singleton)
	/// </summary>
	inline static shared_ptr<ParserFactory> _instance;

	ParserFactory() {};
public:
	/// <summary>
	/// Delete copy constructor
	/// </summary>
	ParserFactory(const ParserFactory& instance) = delete;

	/// <summary>
	/// Delete assignment operator
	/// </summary>
	ParserFactory& operator=(const ParserFactory& instance) = delete;

	/// <summary>
	/// Register a new parser into factory
	/// </summary>
	/// <param name="type">Name of parser in string</param>
	/// <param name="parser">Instance of parser</param>
	void registerWith(string type, shared_ptr<IParser> parser);
public:
	/// <summary>
	/// Select parser by name
	/// </summary>
	/// <param name="type">Name of parser in string</param>
	/// <returns>Instance of parser</returns>
	shared_ptr<IParser> select(string type);

	/// <summary>
	/// Get name of class in string
	/// </summary>
	/// <returns>Name of class</returns>
	string toString();
public:

	/// <summary>
	/// Get instance of Parser Factory
	/// </summary>
	/// <returns>Instance of Parser Factory</returns>
	static shared_ptr<ParserFactory> getInstance();
};