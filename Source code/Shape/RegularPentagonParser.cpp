#include "RegularPentagonParser.h"

shared_ptr<IShape> RegularPentagonParser::parse(stringstream data)
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

    shared_ptr<RegularPentagon> result = make_shared<RegularPentagon>(a);
    return result;
}

string RegularPentagonParser::toString() {
    return "Regular Pentagon Parser";
}