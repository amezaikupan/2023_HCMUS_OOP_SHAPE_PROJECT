#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(FileHandlerTests)
{
public:
    TEST_METHOD(Read_ShouldReturnVectorOfIShapeObjects)
    {
        // Arrange
        stringstream input;
        string inputFile = "test_input.txt";
        ofstream ofile(inputFile);
        ofile << "4" << endl
            << "Triangle: a=3, b=4, c=5" << endl
            << "Square: a=5" << endl
            << "Circle: r=3" << endl
            << "Rectangle: w=3, h=5";
        ofile.close();

        shared_ptr<ParserFactory> factory = ParserFactory::getInstance();

        vector<shared_ptr<IShape>> expectedShapes;
        expectedShapes.push_back(make_shared<Triangle>(3, 4, 5));
        expectedShapes.push_back(make_shared<Square>(5));
        expectedShapes.push_back(make_shared<Circle>(3));
        expectedShapes.push_back(make_shared<Rectangle>(3, 5));

        //// Register the mock parser instance with the factory
        factory->registerWith("Triangle", make_shared<TriangleParser>());
        factory->registerWith("Square", make_shared<SquareParser>());
        factory->registerWith("Circle", make_shared<CircleParser>());
        factory->registerWith("Rectangle", make_shared<RectangleParser>());

        // Act
        vector<shared_ptr<IShape>> shapes;
        shapes = FileHandler::read(inputFile, *factory);

        // Assert
        Assert::AreEqual(expectedShapes.size(), shapes.size());
        for (size_t i = 0; i < expectedShapes.size(); i++)
        {
            Assert::AreEqual(expectedShapes[i]->toString(), shapes[i]->toString());
        }

        remove(inputFile.c_str());
    }

    TEST_METHOD(Read_ShouldReturnVectorOfIShapeObjects_Invalid)
    {
        // Arrange
        stringstream input;
        string inputFile = "test_input.txt";
        ofstream ofile(inputFile);
        
        //Contain 2 typo in name (Triangle and Circle)
        //And 2 missing values (Square (a=) and w=, h=5
        ofile << "4" << endl
            << "Triagle: a=3, b=4, c=5" << endl
            << "Square: a=" << endl
            << "Cirle: r=3" << endl
            << "Rectangle: w=, h=5";
        ofile.close();

        shared_ptr<ParserFactory> factory = ParserFactory::getInstance();

        vector<shared_ptr<IShape>> expectedShapes;
        expectedShapes.push_back(make_shared<Triangle>(3, 4, 5));
        expectedShapes.push_back(make_shared<Square>(5));
        expectedShapes.push_back(make_shared<Circle>(3));
        expectedShapes.push_back(make_shared<Rectangle>(3, 5));

        //// Register the mock parser instance with the factory
        factory->registerWith("Triangle", make_shared<TriangleParser>());
        factory->registerWith("Square", make_shared<SquareParser>());
        factory->registerWith("Circle", make_shared<CircleParser>());
        factory->registerWith("Rectangle", make_shared<RectangleParser>());

        // Act
        vector<shared_ptr<IShape>> shapes;
        shapes = FileHandler::read(inputFile, *factory);

        // Assert
        Assert::AreEqual(0, int(shapes.size()));
        
        remove(inputFile.c_str());
    }
};
