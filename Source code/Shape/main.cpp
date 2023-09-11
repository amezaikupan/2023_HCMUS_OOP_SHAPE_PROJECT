#include "ParserFactory.h"
#include "CircleParser.h"
#include "SquareParser.h"
#include "RectangleParser.h"
#include "TriangleParser.h"
#include "RegularHexagonParser.h"
#include "RegularOctagonParser.h"
#include "RegularPentagonParser.h"
#include "FileHandler.h"
#include "PrintHandler.h"

int main(void) {
	shared_ptr<ParserFactory> factory =  ParserFactory::getInstance();
	factory->registerWith("Circle", make_shared<CircleParser>());
	factory->registerWith("Square", make_shared<SquareParser>());
	factory->registerWith("Rectangle", make_shared<RectangleParser>());


	string input = "data.txt";
	vector<shared_ptr<IShape>> shapes;
	shapes = FileHandler::read(input, *factory);

	PrintHandler::printShapeListWithData(shapes);
}