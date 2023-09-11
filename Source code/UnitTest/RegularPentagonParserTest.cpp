#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace RegularPentagonParserTests
{
	TEST_CLASS(RegularPentagonParserTests)
	{
	public:
		TEST_METHOD(TestRegularPentagonParserParse)
		{
			// Arrange
			RegularPentagonParser parser;
			shared_ptr<IShape> expectedShape = make_shared<RegularPentagon>(5);

			// Act
			shared_ptr<IShape> actualShape = parser.parse(stringstream("Canh=5"));

			// Assert
			Assert::IsNotNull(actualShape.get());
			Assert::AreEqual(expectedShape->toString(), actualShape->toString());
			Assert::AreEqual(expectedShape->data(), actualShape->data());
			Assert::AreEqual(expectedShape->circumference(), actualShape->circumference());
			Assert::AreEqual(expectedShape->area(), actualShape->area());
		}

		TEST_METHOD(TestRegularPentagonParserParse_InvalidData)
		{
			// Arrange
			RegularPentagonParser parser;

			// Act
			shared_ptr<IShape> actualShape = parser.parse(stringstream("InvalidData"));

			// Assert
			Assert::IsNull(actualShape.get());
		}

		TEST_METHOD(TestRegularPentagonParserToString)
		{
			// Arrange
			RegularPentagonParser parser;
			string expectedString = "Regular Pentagon Parser";

			// Act
			string actualString = parser.toString();

			// Assert
			Assert::AreEqual(expectedString, actualString);
		}
	};
}