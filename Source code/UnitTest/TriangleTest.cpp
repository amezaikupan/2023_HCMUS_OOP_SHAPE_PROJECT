#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TriangleTests
{
    TEST_CLASS(TriangleTests)
    {
    public:
        TEST_METHOD(TestCircumference)
        {
            // Arrange
            int sideA = 3;
            int sideB = 4;
            int sideC = 5;
            Triangle triangle(sideA, sideB, sideC);
            float expectedCircumference = sideA + sideB + sideC;

            // Act
            float actualCircumference = triangle.circumference();

            // Assert
            Assert::AreEqual(expectedCircumference, actualCircumference);
        }

        TEST_METHOD(TestArea)
        {
            // Arrange
            int sideA = 3;
            int sideB = 4;
            int sideC = 5;
            Triangle triangle(sideA, sideB, sideC);
            float halfPerimeter = (sideA + sideB + sideC);
            float expectedArea = sqrt(halfPerimeter * (halfPerimeter - sideA) * (halfPerimeter - sideB) * (halfPerimeter - sideC));

            // Act
            float actualArea = triangle.area();

            // Assert
            Assert::AreEqual(expectedArea, actualArea);
        }

        TEST_METHOD(TestToString)
        {
            // Arrange
            Triangle triangle;
            string expectedString = "Hinh tam giac";

            // Act
            string actualString = triangle.toString();

            // Assert
            Assert::AreEqual(expectedString, actualString);
        }

        TEST_METHOD(TestData)
        {
            // Arrange
            int sideA = 3;
            int sideB = 4;
            int sideC = 5;
            Triangle triangle(sideA, sideB, sideC);
            string expectedData = "CanhA=3, CanhB=4, CanhC=5";

            // Act
            string actualData = triangle.data();

            // Assert
            Assert::AreEqual(expectedData, actualData);
        }
    };
}