#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SquareTests
{
    TEST_CLASS(SquareTests)
    {
    public:
        TEST_METHOD(TestCircumference)
        {
            // Arrange
            int sideLength = 5;
            Square square(sideLength);
            float expectedCircumference = sideLength * 4;

            // Act
            float actualCircumference = square.circumference();

            // Assert
            Assert::AreEqual(expectedCircumference, actualCircumference);
        }

        TEST_METHOD(TestArea)
        {
            // Arrange
            int sideLength = 5;
            Square square(sideLength);
            float expectedArea = sideLength * sideLength;

            // Act
            float actualArea = square.area();

            // Assert
            Assert::AreEqual(expectedArea, actualArea);
        }

        TEST_METHOD(TestToString)
        {
            // Arrange
            Square square;
            string expectedString = "Hinh vuong";

            // Act
            string actualString = square.toString();

            // Assert
            Assert::AreEqual(expectedString, actualString);
        }

        TEST_METHOD(TestData)
        {
            // Arrange
            int sideLength = 5;
            Square square(sideLength);
            string expectedData = "Canh=5";

            // Act
            string actualData = square.data();

            // Assert
            Assert::AreEqual(expectedData, actualData);
        }
    };
}