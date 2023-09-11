#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RegularOctagonParserTests
{
	TEST_CLASS(RegularOctagonParserTests)
	{
	public:
		TEST_METHOD(TestRegularOctagonParserParse)
		{
			// Arrange
			RegularOctagonParser parser;
			shared_ptr<IShape> expectedShape = make_shared<RegularOctagon>(6);

			// Act
			shared_ptr<IShape> actualShape = parser.parse(stringstream("Canh=6"));

			// Assert
			Assert::IsNotNull(actualShape.get());
			Assert::AreEqual(expectedShape->toString(), actualShape->toString());
			Assert::AreEqual(expectedShape->data(), actualShape->data());
			Assert::AreEqual(expectedShape->circumference(), actualShape->circumference());
			Assert::AreEqual(expectedShape->area(), actualShape->area());
		}

		TEST_METHOD(TestRegularOctagonParserParse_InvalidData)
		{
			// Arrange
			RegularOctagonParser parser;

			// Act
			shared_ptr<IShape> actualShape = parser.parse(stringstream("InvalidData"));

			// Assert
			Assert::IsNull(actualShape.get());
		}

		TEST_METHOD(TestRegularOctagonParserToString)
		{
			// Arrange
			RegularOctagonParser parser;
			string expectedString = "Regular Octagon Parser";

			// Act
			string actualString = parser.toString();

			// Assert
			Assert::AreEqual(expectedString, actualString);
		}
	};
}