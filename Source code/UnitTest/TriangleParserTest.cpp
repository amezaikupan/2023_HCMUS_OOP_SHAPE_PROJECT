#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TriangleParserTests
{
	TEST_CLASS(TriangleParserTests)
	{
	public:
		TEST_METHOD(TestTriangleParserParse)
		{
			// Arrange
			TriangleParser parser;
			shared_ptr<IShape> expectedShape = make_shared<Triangle>(3, 4, 5);

			// Act
			shared_ptr<IShape> actualShape = parser.parse(stringstream("a=3, b=4, c=5"));

			// Assert
			Assert::IsNotNull(actualShape.get());
			Assert::AreEqual(expectedShape->toString(), actualShape->toString());
			Assert::AreEqual(expectedShape->data(), actualShape->data());
			Assert::AreEqual(expectedShape->circumference(), actualShape->circumference());
			Assert::AreEqual(expectedShape->area(), actualShape->area());
		}

		TEST_METHOD(TestTriangleParserParse_InvalidData)
		{
			// Arrange
			TriangleParser parser;

			// Act
			shared_ptr<IShape> actualShape = parser.parse(stringstream("InvalidData"));

			// Assert
			Assert::IsNull(actualShape.get());
		}

		TEST_METHOD(TestTriangleParserToString)
		{
			// Arrange
			TriangleParser parser;
			string expectedString = "Triangle Parser";

			// Act
			string actualString = parser.toString();

			// Assert
			Assert::AreEqual(expectedString, actualString);
		}
	};
}