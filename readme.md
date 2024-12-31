# Shape Project - Object-Oriented Programming 21_3

This is a project for my OOP course. The project is written in OOP style, using the Shape interface to construct 8 class of Shape, and it also incorporate other Design Patterns: Singleton, Factory, Strategy.

All the details of the project is below.

## Project Structure and Compilation Requirements
---
### 1. Project Structure
The project is structured according to the following file diagram:

```
└── Source code
    ├── Shape
        ├── Object.h
        ├── Object.cpp
        ├── IShape.h
        ├── IShape.cpp
        ├── IParser.h
        ├── IParser.cpp
        ├── ParserFactory.h
        ├── ParserFactory.cpp
        ├── Circle.h
        ├── Circle.cpp
        ├── CircleParser.h
        ├── CircleParser.cpp
        ├── Rectangle.h
        ├── Rectangle.cpp
        ├── RectangleParser.h
        ├── RectangleParser.cpp
        ├── RegularHexagon.h
        ├── RegularHexagon.cpp
        ├── RegularHexagonParser.h
        ├── RegularHexagonParser.cpp
        ├── RegularOctagon.h
        ├── RegularOctagon.cpp
        ├── RegularOctagonParser.h
        ├── RegularOctagonParser.cpp
        ├── RegularPentagon.h
        ├── RegularPentagon.cpp
        ├── RegularPentagonParser.h
        ├── RegularPentagonParser.cpp
        ├── Square.h
        ├── Square.cpp
        ├── SquareParser.h
        ├── SquareParser.cpp
        ├── Triangle.h
        ├── Triangle.cpp
        ├── TriangleParser.h
        ├── TriangleParser.cpp
        ├── FileHandler.h
        ├── FileHandler.cpp
        ├── PrintHandler.h
        └── PrintHandler.cpp
    ├── Unit Test
        ├── pch.h
        ├── pch.cpp
        ├── ParserFactoryTest.cpp
        ├── CircleTest.cpp
        ├── CircleParser.cpp
        ├── Rectangle.cpp
        ├── RectangleParser.cpp
        ├── RegularHexagon.cpp
        ├── RegularHexagonParser.cpp
        ├── RegularOctagon.cpp
        ├── RegularOctagonParser.cpp
        ├── RegularPentagon.cpp
        ├── RegularPentagonParser.cpp
        ├── SquareTest.cpp
        ├── SquareTestParser.cpp
        ├── TriangleTest.cpp
        └── TriangleParserTest.cpp
└── Release
        ├── data.txt
        └── Shape.exe
└── readme.txt
```
**Shape Directory**  
In the Shape folder, you'll find the following files:
- Virtual classes, inherited shape classes, Factory class, and data parsing classes for different shapes.
- File handling and data printing utility classes.

In the UnitTest folder, you'll find files for:
- Test classes (using Microsoft Framework) for shape classes and their parsers.

**Release Directory**
- The data.txt file contains the data used for execution.
- Shape.exe is the executable file of the program.

### 2. Compilation Requirements and System Information

**Compilation Requirements**  
The Shape.exe program needs to read data from the data.txt file for compilation. This information is provided in the Release folder.

**System Information**  
- Operating System: Windows 10 Home Single Language.
- IDE: Visual Studio 2022.
- Programming Language: C++ 20.

## About Functionality
---
### 1. Completed Features
- Object-oriented programming approach.
- Reading a list of shapes from a data file in the correct format.
- Printing information about shapes to the screen (in normal format and sorted by area).
- Using design patterns:
    - Singleton: Used for the ParserFactory class.
    - Factory: Used for the ParserFactory class.
    - Strategy: Used for parsing classes (inherited from IParser).
    - Dependency injection principle: Injection by adding parsers to the ParserFactory in the main function.
- Using smart pointers to handle memory.
- Handling exceptions.
- Adding additional geometric shapes (RegularHexagon, RegularPentagon, RegularOctagon).
- Implementing unit tests for all classes in the program, except for the PrintHandler class (which is responsible for console printing and does not return values).
- Generating system documentation using Doxygen.
- Providing meaningful comments for functions in the source code.

### 2. Incomplete Features
- None.

### 3. Unimplemented Features
- Separating objects into dynamic link libraries (DLLs).

## About Knowledge Acquired
---
### 1. About Design Patterns

During my study of object-oriented programming, I initially lacked knowledge about the concepts and methods of OOP. As I progressed, I realized the shortcomings of OOP, such as lack of consistency, code redundancy, and difficulty in solving complex problems elegantly. It was at this point that I recognized the need for a more unified approach in software engineering.

After studying design patterns for the project, I gained a broader understanding, though not comprehensive, of various design patterns. Here are some interesting insights I acquired:

- Singleton Pattern: Used when you want a class to have only one instance. It helps ensure that there is a single source of truth in the program.
    - Strengths: Memory-efficient.
    - Weaknesses: Challenging for unit testing (as the same instance is used).
    - Examples of Singleton usage: A class providing a random seed, a Factory class (as it often combines with Singleton).

- Factory Pattern: Not to be confused with the Abstract Factory pattern (which creates factories). The Factory pattern is used when you want to create an instance of a class based on specific conditions, like a production factory. Developers request a specific tool, and they don't need to know how that tool is created – the factory ensures the creation.
    - Strengths: Easy program/module expansion, maintainability, and updates.
    - Weaknesses: More complex to implement and requires more files.
    - Examples of Factory usage: Parser manager class, managing different types of pastries, etc.

- Strategy Pattern: Used when you want to create a family of classes with similar roles but different functionalities – like a family of sports activities including running, swimming, etc.
    - Strengths: Ability to change algorithms during runtime.
    - Weaknesses: Requires a sufficient number of classes in the family; clients must know which class to choose.
    - Examples of Strategy usage: Different parsers, various sorting algorithm classes, etc.

### 2. About Unit Testing and Using Chat GPT in Testing

Using unit tests was a new experience for me, and I found it fascinating as it allowed me to test my code quickly without running the code and checking the console.

One valuable knowledge I gained during the process of writing and testing unit tests was the use of AI (Chat GPT) in finding test cases and supporting test writing. Generative AI has the capability to access a vast amount of information, making it efficient for ideation (generating test cases).

Specifically, while the code generated by Chat GPT often contained syntax errors, the code ideas were valuable for testing. Fixing the code to make it error-free and runnable was the developer's responsibility.

I believe that using AI in programming and testing will continue to evolve in the future and is valuable knowledge to have.

### 3. About SOLID Principles

During my study of OOP, I learned about important coding principles, which I found intriguing and applicable. These principles are encapsulated in the acronym SOLID:

- Single Responsibility Principle (SRP): Each class should have only one reason to change, meaning it should have only one specific responsibility.
- Open/Closed Principle (OCP): A class should be open for extension but closed for modification, emphasizing the importance of extending rather than modifying existing classes.
- Liskov Substitution Principle (LSP): Subtypes must be substitutable for their base types, ensuring that derived classes truly inherit from their base classes.
- Interface Segregation Principle (ISP): Clients should not be forced to depend on interfaces they do not use, advocating for breaking interfaces into smaller, specialized ones.
- Dependency Inversion Principle (DIP): High-level modules should not depend on low-level modules; both should depend on abstractions, promoting loose coupling.

There are other principles, such as DRY (Don't Repeat Yourself) and KISS (Keep It Simple, Stupid), which I find interesting as well. While I may not yet have the expertise to fully adhere to these principles, knowing about them and considering their concepts has improved my coding practices and made them more straightforward. I believe these are concepts I should continue to learn and apply in the future.

## Thanks and Acknowledgments
---
I would like to express my gratitude to our instructor Mr. Tran Duy Quang M.Sc for being an open-minded and accommodating lecturer. I may not grasp concepts as quickly as others, and I appreciate that Professor Quang takes his time to explain things thoroughly and is willing to start from the beginning if students do not understand. I also appreciate the lengthy assignments in the course, which relieved the pressure of deadlines and allowed me ample time for deeper exploration of the topics.

I also want to thank Mr. Le Tuan Thu M.Sc, my OOP practical class instructor. He is patient and generous with students, and I highly appreciate that.
