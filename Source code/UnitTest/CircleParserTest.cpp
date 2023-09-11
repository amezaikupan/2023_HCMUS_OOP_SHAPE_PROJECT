#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CircleParserTests
{
	TEST_CLASS(CircleParserTests)
	{
	public:
		TEST_METHOD(TestCircleParserParse_ValidData)
		{
			// Arrange
			CircleParser circleParser;
			shared_ptr<IShape> expectedShape = make_shared<Circle>(5);

			// Act
			shared_ptr<IShape> actualShape = circleParser.parse(stringstream("R=5"));

			// Assert
			Assert::IsNotNull(actualShape.get());
			Assert::AreEqual(expectedShape->toString(), actualShape->toString());
		}

		TEST_METHOD(TestCircleParserParse_InvalidData)
		{
			// Arrange
			CircleParser circleParser;

			// Act
			shared_ptr<IShape> actualShape = circleParser.parse(stringstream("R=abc"));

			// Assert
			Assert::IsNull(actualShape.get());
		}

		TEST_METHOD(TestCircleParserToString)
		{
			// Arrange
			CircleParser circleParser;
			string expectedString = "Circle Parser";

			// Act
			string actualString = circleParser.toString();

			// Assert
			Assert::AreEqual(expectedString, actualString);
		}
	};
}