#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SquareParserTests
{
	TEST_CLASS(SquareParserTests)
	{
	public:
		TEST_METHOD(TestSquareParserParse)
		{
			// Arrange
			SquareParser parser;
			shared_ptr<IShape> expectedShape = make_shared<Square>(5);

			// Act
			shared_ptr<IShape> actualShape = parser.parse(stringstream("Canh=5"));

			// Assert
			Assert::IsNotNull(actualShape.get());
			Assert::AreEqual(expectedShape->toString(), actualShape->toString());
			Assert::AreEqual(expectedShape->data(), actualShape->data());
			Assert::AreEqual(expectedShape->circumference(), actualShape->circumference());
			Assert::AreEqual(expectedShape->area(), actualShape->area());
		}

		TEST_METHOD(TestSquareParserParse_InvalidData)
		{
			// Arrange
			SquareParser parser;
			stringstream data("InvalidData");

			// Act
			shared_ptr<IShape> actualShape = parser.parse(stringstream("InvalidData"));

			// Assert
			Assert::IsNull(actualShape.get());
		}

		TEST_METHOD(TestSquareParserToString)
		{
			// Arrange
			SquareParser parser;
			string expectedString = "Square Parser";

			// Act
			string actualString = parser.toString();

			// Assert
			Assert::AreEqual(expectedString, actualString);
		}
	};
}