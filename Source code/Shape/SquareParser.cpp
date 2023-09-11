#include "SquareParser.h"

shared_ptr<IShape> SquareParser::parse(stringstream data)
{
    string buffer;
    getline(data, buffer, '=');
    getline(data, buffer);
    
    int a;
    try {
        a = stoi(buffer);
    }
    catch (exception) {
        return nullptr;
    }

    shared_ptr<Square> result = make_shared<Square>(a);

    return result;
}

string SquareParser::toString() {
    return "Square Parser";
}