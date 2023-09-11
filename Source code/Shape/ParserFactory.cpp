#include "ParserFactory.h"

void ParserFactory::registerWith(string type, shared_ptr<IParser> parser)
{
	_prototypes.insert({ type, parser });
}

shared_ptr<IParser> ParserFactory::select(string type)
{
	shared_ptr<IParser> parser = nullptr;

	if (_prototypes.contains(type)) {
		parser = _prototypes[type];
	}
	return parser;
}

string ParserFactory::toString() {
	return "Parser Factory";
}

shared_ptr<ParserFactory> ParserFactory::getInstance()
{
	if (_instance == nullptr) {
		_instance.reset(new ParserFactory);
	}
	return _instance;
}
