#include "RegularHexagonParser.h"

shared_ptr<IShape> RegularHexagonParser::parse(stringstream data)
{
    string buffer;
    getline(data, buffer, '=');
    getline(data, buffer);

    int a;
    try {
        a = stoi(buffer);
    }
    catch (exception ex) {
        return nullptr;
    }

    shared_ptr<RegularHexagon> result = make_shared<RegularHexagon>(a);

    return result;
}

string RegularHexagonParser::toString() {
    return "Regular Hexagon";
}
