#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleTests
{
	TEST_CLASS(RectangleTests)
	{
	public:
		TEST_METHOD(TestRectangleCircumference)
		{
			// Arrange
			Rectangle rectangle(4, 5);
			float expectedCircumference = 4 * 2 + 5 * 2;

			// Act
			float actualCircumference = rectangle.circumference();

			// Assert
			Assert::AreEqual(expectedCircumference, actualCircumference);
		}

		TEST_METHOD(TestRectangleArea)
		{
			// Arrange
			Rectangle rectangle(4, 5);
			float expectedArea = 4 * 5;

			// Act
			float actualArea = rectangle.area();

			// Assert
			Assert::AreEqual(expectedArea, actualArea);
		}

		TEST_METHOD(TestRectangleToString)
		{
			// Arrange
			Rectangle rectangle(4, 5);
			string expectedString = "Hinh chu nhat";

			// Act
			string actualString = rectangle.toString();

			// Assert
			Assert::AreEqual(expectedString, actualString);
		}

		TEST_METHOD(TestRectangleData)
		{
			// Arrange
			Rectangle rectangle(4, 5);
			string expectedData = "Rong=4, Cao=5";

			// Act
			string actualData = rectangle.data();

			// Assert
			Assert::AreEqual(expectedData, actualData);
		}
	};
}