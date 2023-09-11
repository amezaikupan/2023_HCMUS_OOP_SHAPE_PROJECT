#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RegularPentagonTests
{
    TEST_CLASS(RegularPentagonTests)
    {
    public:
        TEST_METHOD(TestCircumference)
        {
            // Arrange
            int sideLength = 5;
            RegularPentagon pentagon(sideLength);
            float expectedCircumference = sideLength * 5;

            // Act
            float actualCircumference = pentagon.circumference();

            // Assert
            Assert::AreEqual(expectedCircumference, actualCircumference);
        }

        TEST_METHOD(TestArea)
        {
            // Arrange
            int sideLength = 5;
            RegularPentagon pentagon(sideLength);
            float expectedArea = sideLength * sideLength * 1.72;

            // Act
            float actualArea = pentagon.area();

            // Assert
            Assert::AreEqual(expectedArea, actualArea);
        }

        TEST_METHOD(TestToString)
        {
            // Arrange
            RegularPentagon pentagon;
            string expectedString = "Hinh ngu giac deu";

            // Act
            string actualString = pentagon.toString();

            // Assert
            Assert::AreEqual(expectedString, actualString);
        }

        TEST_METHOD(TestData)
        {
            // Arrange
            int sideLength = 5;
            RegularPentagon pentagon(sideLength);
            string expectedData = "Canh=5";

            // Act
            string actualData = pentagon.data();

            // Assert
            Assert::AreEqual(expectedData, actualData);
        }
    };
}