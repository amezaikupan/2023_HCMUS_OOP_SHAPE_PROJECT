#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RegularHexagonParserTests
{
	TEST_CLASS(RegularHexagonParserTests)
	{
	public:
		TEST_METHOD(TestRegularHexagonParserParse)
		{
			// Arrange
			RegularHexagonParser parser;
			shared_ptr<IShape> expectedShape = make_shared<RegularHexagon>(5);

			// Act
			shared_ptr<IShape> actualShape = parser.parse(stringstream("Canh=5"));

			// Assert
			Assert::IsNotNull(actualShape.get());
			Assert::AreEqual(expectedShape->toString(), actualShape->toString());
			Assert::AreEqual(expectedShape->data(), actualShape->data());
			Assert::AreEqual(expectedShape->circumference(), actualShape->circumference());
			Assert::AreEqual(expectedShape->area(), actualShape->area());
		}

		TEST_METHOD(TestRegularHexagonParserParse_InvalidData)
		{
			// Arrange
			RegularHexagonParser parser;

			// Act
			shared_ptr<IShape> actualShape = parser.parse(stringstream("InvalidData"));

			// Assert
			Assert::IsNull(actualShape.get());
		}

		TEST_METHOD(TestRegularHexagonParserToString)
		{
			// Arrange
			RegularHexagonParser parser;
			string expectedString = "Regular Hexagon";

			// Act
			string actualString = parser.toString();

			// Assert
			Assert::AreEqual(expectedString, actualString);
		}
	};
}