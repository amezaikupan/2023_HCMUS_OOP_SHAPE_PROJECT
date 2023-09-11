#include "RectangleParser.h"

shared_ptr<IShape> RectangleParser::parse(stringstream data)
{
    string buffer;
    getline(data, buffer, '=');
    getline(data, buffer, ',');

    int w, h;
    try {
        w = stoi(buffer);
    }
    catch (exception) {
        return nullptr;
    }

    getline(data, buffer, '=');
    getline(data, buffer);

    try {
        h = stoi(buffer);
    }
    catch (exception) {
        return nullptr;
    }

    shared_ptr<Rectangle> result = make_shared<Rectangle>(w, h);

    return result;
}

string RectangleParser::toString() {
    return "Rectangle Parser";
}
