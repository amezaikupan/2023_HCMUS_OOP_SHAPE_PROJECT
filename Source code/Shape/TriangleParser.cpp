#include "TriangleParser.h"

shared_ptr<IShape> TriangleParser::parse(stringstream data)
{
    string buffer;
    getline(data, buffer, '=');
    getline(data, buffer, ',');

    int a, b, c;
    try {
        a = stoi(buffer);
    }
    catch (exception) {
        return nullptr;
    }

    getline(data, buffer, '=');
    getline(data, buffer, ',');
    try {
        b = stoi(buffer);
    }
    catch (exception) {
        return nullptr;
    }

    getline(data, buffer, '=');
    getline(data, buffer);
    try {
        c = stoi(buffer);
    }
    catch (exception) {
        return nullptr;
    }

    shared_ptr<Triangle> result = make_shared<Triangle>(a, b, c);
    return result;
}

string TriangleParser::toString() {
    return "Triangle Parser";
}