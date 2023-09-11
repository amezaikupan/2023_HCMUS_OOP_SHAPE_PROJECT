#include "RegularOctagonParser.h"

shared_ptr<IShape> RegularOctagonParser::parse(stringstream data)
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

    shared_ptr<RegularOctagon> result = make_shared<RegularOctagon>(a);
    return result;
}

string RegularOctagonParser::toString() {
    return "Regular Octagon Parser";
}
