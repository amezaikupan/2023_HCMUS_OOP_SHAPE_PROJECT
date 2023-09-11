#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CircleTests
{
	TEST_CLASS(CircleTests)
	{
	public:
		TEST_METHOD(TestCircleCircumference)
		{
			// Arrange
			float pi = 3.14;
			Circle circle(5);
			float expectedCircumference = 2 * pi * 5;

			// Act
			float actualCircumference = circle.circumference();

			// Assert
			Assert::AreEqual(expectedCircumference, actualCircumference);
		}

		TEST_METHOD(TestCircleArea)
		{
			// Arrange
			float pi = 3.14;
			Circle circle(5);
			float expectedArea = pi * 5 * 5;

			// Act
			float actualArea = circle.area();

			// Assert
			Assert::AreEqual(expectedArea, actualArea);
		}

		TEST_METHOD(TestCircleToString)
		{
			// Arrange
			Circle circle(5);
			string expectedString = "Hinh tron";

			// Act
			string actualString = circle.toString();

			// Assert
			Assert::AreEqual(expectedString, actualString);
		}

		TEST_METHOD(TestCircleData)
		{
			// Arrange
			Circle circle(5);
			string expectedData = "Ban kinh=5";

			// Act
			string actualData = circle.data();

			// Assert
			Assert::AreEqual(expectedData, actualData);
		}
	};
}