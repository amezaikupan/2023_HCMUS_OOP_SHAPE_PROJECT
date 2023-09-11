#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RegularOctagonTests
{
    TEST_CLASS(RegularOctagonTests)
    {
    public:
        TEST_METHOD(TestCircumference)
        {
            // Arrange
            int sideLength = 5;
            RegularOctagon octagon(sideLength);
            float expectedCircumference = sideLength * 8;

            // Act
            float actualCircumference = octagon.circumference();

            // Assert
            Assert::AreEqual(expectedCircumference, actualCircumference);
        }

        TEST_METHOD(TestArea)
        {
            // Arrange
            int sideLength = 5;
            RegularOctagon octagon(sideLength);
            float expectedArea = sideLength * sideLength * 4.828;

            // Act
            float actualArea = octagon.area();

            // Assert
            Assert::AreEqual(expectedArea, actualArea, 0.01f);
        }

        TEST_METHOD(TestToString)
        {
            // Arrange
            RegularOctagon octagon;
            string expectedString = "Hinh thap giac deu";

            // Act
            string actualString = octagon.toString();

            // Assert
            Assert::AreEqual(expectedString, actualString);
        }

        TEST_METHOD(TestData)
        {
            // Arrange
            int sideLength = 5;
            RegularOctagon octagon(sideLength);
            string expectedData = "Canh=5";

            // Act
            string actualData = octagon.data();

            // Assert
            Assert::AreEqual(expectedData, actualData);
        }
    };
}
