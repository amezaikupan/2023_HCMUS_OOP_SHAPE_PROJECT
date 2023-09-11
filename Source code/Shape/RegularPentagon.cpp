#include "RegularPentagon.h"

RegularPentagon::RegularPentagon() {
    _a = INIT_VALUE;
}

RegularPentagon::RegularPentagon(int a) {
    _a = a;
}

int RegularPentagon::getSide()
{
    return _a;
}

float RegularPentagon::circumference() {
    float result = _a * 5;
    return result;
}

float RegularPentagon::area() {
    float result = _a * _a * AREA_CONST;
    return result;
}

string RegularPentagon::toString()
{
    return "Hinh ngu giac deu";
}

string RegularPentagon::data()
{
    stringstream builder;
    builder << "Canh=" << _a;
    return builder.str();
}
