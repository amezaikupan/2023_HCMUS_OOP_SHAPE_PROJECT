#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RegularHexagonTests
{
	TEST_CLASS(RegularHexagonTests)
	{
	public:
		TEST_METHOD(TestRegularHexagonCircumference)
		{
			// Arrange
			RegularHexagon hexagon(5);
			float expectedCircumference = 30;

			// Act
			float actualCircumference = hexagon.circumference();

			// Assert
			Assert::AreEqual(expectedCircumference, actualCircumference);
		}

		TEST_METHOD(TestRegularHexagonArea)
		{
			// Arrange
			RegularHexagon hexagon(5);
			float expectedArea = 64.95f;

			// Act
			float actualArea = hexagon.area();

			// Assert
			Assert::AreEqual(expectedArea, actualArea, 0.01f);
		}

		TEST_METHOD(TestRegularHexagonToString)
		{
			// Arrange
			RegularHexagon hexagon(5);
			string expectedString = "Hinh luc giac deu";

			// Act
			string actualString = hexagon.toString();

			// Assert
			Assert::AreEqual(expectedString, actualString);
		}

		TEST_METHOD(TestRegularHexagonData)
		{
			// Arrange
			RegularHexagon hexagon(5);
			string expectedData = "Canh=5";

			// Act
			string actualData = hexagon.data();

			// Assert
			Assert::AreEqual(expectedData, actualData);
		}
	};
}
