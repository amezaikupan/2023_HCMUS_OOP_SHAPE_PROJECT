#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleParserTests
{
	TEST_CLASS(RectangleParserTests)
	{
	public:
		TEST_METHOD(TestRectangleParserParse_ValidData)
		{
			// Arrange
			RectangleParser parser;

			// Act
			shared_ptr<IShape> shape = parser.parse(stringstream("Width=4, Height=6"));

			// Assert
			Assert::IsNotNull(shape.get());
			Assert::IsTrue(dynamic_cast<Rectangle*>(shape.get()) != nullptr);

			shared_ptr<Rectangle> rectangle = dynamic_pointer_cast<Rectangle>(shape);
			Assert::IsNotNull(rectangle.get());
			Assert::AreEqual(4, rectangle->getWidth());
			Assert::AreEqual(6, rectangle->getHeight());
		}

		TEST_METHOD(TestRectangleParserParse_InvalidData)
		{
			// Arrange
			RectangleParser parser;

			// Act
			shared_ptr<IShape> shape = parser.parse(stringstream("Width=4, Height=invalid"));

			// Assert
			Assert::IsNull(shape.get());
		}

		TEST_METHOD(TestRectangleParserToString)
		{
			// Arrange
			RectangleParser parser;
			string expectedString = "Rectangle Parser";

			// Act
			string actualString = parser.toString();

			// Assert
			Assert::AreEqual(expectedString, actualString);
		}
	};
}