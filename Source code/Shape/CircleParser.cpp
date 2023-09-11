#include "CircleParser.h"

shared_ptr<IShape> CircleParser::parse(stringstream data)
{
    string buffer;
    getline(data, buffer, '=');
    getline(data, buffer);
    
    int r;
    try {
        r = stoi(buffer);
    }
    catch(exception) {
        return nullptr;

    }

    shared_ptr<Circle> result = make_shared<Circle>(r);
    return result;
}

string CircleParser::toString() {
    return "Circle Parser";
}