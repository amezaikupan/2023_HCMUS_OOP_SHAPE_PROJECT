// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

// add headers that you want to pre-compile here
#include "../Shape/Circle.h"
#include "../Shape/Rectangle.h"
#include "../Shape/RegularHexagon.h"
#include "../Shape/RegularOctagon.h"
#include "../Shape/RegularPentagon.h"
#include "../Shape/Square.h"
#include "../Shape/Triangle.h"
#include "../Shape/IShape.h"
#include "../Shape/IParser.h"
#include "../Shape/ParserFactory.h"
#include "../Shape/CircleParser.h"
#include "../Shape/RectangleParser.h"
#include "../Shape/RegularHexagonParser.h"
#include "../Shape/RegularOctagonParser.h"
#include "../Shape/RegularPentagonParser.h"
#include "../Shape/SquareParser.h"
#include "../Shape/TriangleParser.h"
#include "../Shape/FileHandler.h"
#include "../Shape/PrintHandler.h"

#endif //PCH_H
