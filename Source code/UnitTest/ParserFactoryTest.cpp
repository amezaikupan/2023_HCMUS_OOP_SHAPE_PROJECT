#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ParserFactoryTests
{
	TEST_CLASS(ParserFactoryTests)
	{
	public:
		TEST_METHOD(TestParserFactoryGetInstance)
		{
			// Arrange & Act
			shared_ptr<ParserFactory> factory1 = ParserFactory::getInstance();
			shared_ptr<ParserFactory> factory2 = ParserFactory::getInstance();

			// Assert
			Assert::IsNotNull(factory1.get());
			Assert::IsNotNull(factory2.get());
			
			string add1 = std::to_string((unsigned long long)(void**)factory1.get());
			string add2 = std::to_string((unsigned long long)(void**)factory2.get());

			Assert::AreEqual(add1, add2);
			}

		TEST_METHOD(TestParserFactoryRegisterWith)
		{
			// Arrange
			shared_ptr<ParserFactory> factory = ParserFactory::getInstance();
			shared_ptr<IParser> circleParser = make_shared<CircleParser>();

			// Act
			factory->registerWith("Circle", circleParser);
			shared_ptr<IParser> actualParser = factory->select("Circle");

			// Assert
			Assert::IsNotNull(actualParser.get());
		}

		TEST_METHOD(TestParserFactoryRegisterWith_InvalidParser)
		{
			// Arrange
			shared_ptr<ParserFactory> factory = ParserFactory::getInstance();
			shared_ptr<IParser> invalidParser = nullptr;

			// Act
			factory->registerWith("InvalidParser", invalidParser);
			shared_ptr<IParser> actualParser = factory->select("InvalidParser");

			// Assert
			Assert::IsNull(actualParser.get());
		}
		TEST_METHOD(TestParserFactorySelect_InvalidParser)
		{
			// Arrange
			shared_ptr<ParserFactory> factory = ParserFactory::getInstance();

			// Act
			shared_ptr<IParser> actualParser = factory->select("InvalidParser");

			// Assert
			Assert::IsNull(actualParser.get());
		}

		TEST_METHOD(TestParserFactoryToString)
		{
			// Arrange
			shared_ptr<ParserFactory> factory = ParserFactory::getInstance();
			string expectedString = "Parser Factory";

			// Act
			string actualString = factory->toString();

			// Assert
			Assert::AreEqual(expectedString, actualString);
		}
	};
}