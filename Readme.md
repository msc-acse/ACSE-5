# ACSE-5: Advanced Programming

## Getting started 
This module starts with a primer on C++ programming, and will teach you how to develop and build C++ programs. Students will be taught functions and input/output handling, as well as memory handling concepts such as pointers, memory allocation and advanced data structures such as linked lists and trees.

You will be taught practical skills for analysing software for potential bugs as well as quickly locating bugs when they arise using debuggers. Additionally, you will learn how to use profiling techniques to identify performance hotspots in software and gain a practical understanding of the factors that limit the performance of software.

This will be followed by an introduction to object-oriented programming with C++ including how to define and use classes, inheritance, overloaded functions and polymorphism.

These will all be taught in the context of scientific programming and numerical methods, with relevant examples and exercises being used to illustrate the programming concepts. Regular programming assignments will bring together all the skills that will be learned throughout the course and build upon the skills taught in the previous programming and numerical methods courses as part of the ACS MSc. 

## Getting started

In preparation for your ACSE-5 lecture on “Advanced Programming” I have the following instructions/info:
- As part of our ACSE-5 we will be primarily using Microsoft Visual C++ (MSVC), an IDE (integrated development environment) for the C++ programming language (https://en.wikipedia.org/wiki/Microsoft_Visual_Studio). 
- The most basic edition of Visual Studio, the Community edition, is available free of charge. This is available for C++, for *Windows* only. Please notice that this is different from "Microsoft Visual Code" which is only an editor, and not an IDE.
- Please install Microsoft Visual Studio Community 2017 in your laptops (https://visualstudio.microsoft.com/vs/community/). The installation may take a few hours. After you download the install program for Visual Studio 2017 and run it, you will be presented with a screen. Select the option to install "Desktop development with C++”. After installing MSVC make sure that you can create and save a file to a local folder.
- If you do not have a Windows system (Mac or Linux) OR if you cannot install MSVC for space or any other reason, please send me an email as soon as possible (apaluszn@imperial.ac.uk).
- During our first class, next Monday, we will make sure that everyone has access to the MSVC IDE, and we will get started on some simple IDE tasks to set us up for the term. 

## Reference Sites

- Google's C++ Class (https://developers.google.com/edu/c++/)
- Intro to C++ (http://www.cplusplus.com/doc/tutorial/)
- Creator of C++ Bjarne Stroustrup (http://www.stroustrup.com)
- C++ "deity" Scott Meyers (http://www.aristeia.com) See books: Effective C++, More Effective C++, Effective STL

## Reference Books

For those that love the touch of paper, we suggest:
- (*most used*) Bjarne Stroustrup: Programming -- Principles and Practice Using C++. Second Edition (2014). Addison-Wesley. 1312 pages. 
- Stanley Lippman, Josée Lajoie, and Barbara E. Moo: C++ Primer (updated for C++11) Fifth edition (2012). Addison Wesley. 976 pages.
- Bjarne Stroustrup: A Tour of C++. Second Edition (2018). Addison-Wesley. 240 pages. 

## Lecture Plan 

1. 14/01 – Introduction: C++, setting up MSVC IDE, compiling and linking, executables. Data types. Getting started. [Slides1](Lecture1.pdf) [Code1](1main_hello_world.cpp) [Code2](2main_prime.cpp) [Assignment1](ACSE5-Assignment1.pdf) [**Please use your city of choice to register your team**] [**Please see Assignment and Evaluation teams tab for registered cities**] (Adriana Paluszny)
2. 17/01 – Functional programming. Input/output. Pointers and References. Introduction to containers. Functions: passing by value and reference. [Slides2](Lecture%202.pdf) [Code](Lecture%202_code.zip) (Steven Dargaville) 
3. 21/01 - Introduction to objects (using objects). Overview of the standard template library (STL). Focus on STL containers: vectors, lists, maps. MSVC Debugger. [Slides3](Lecture3.pdf) [Code3a](3main_const.cpp) [Code3b](3log1.cpp) [Code4](4main_template.cpp) [Code5](5main_stl_class_start.cpp) [Code6](6main_stl_containers.cpp) [Code7](7factorial.cpp) (Adriana Paluszny)
4. 24/01 – Object oriented programming (creating objects). Classes, constructor, destructor, copy constructor, members, Boolean operators, mutators, accessors. Introduction to Inheritance, Polymorphism & Encapsulation in C++. Making objects STL compatible. (Adriana Paluszny)  
5. 28/01 – 30-minute C++ History Trip. C++18. The Standards Committee. Programming paradigms. Agile. Introduction to UML. Roles in programming teams (Architect vs. programmer). (Adriana Paluszny)
6. 31/01 – Memory management with C++. Safety and housekeeping. Applied to linear systems and matrices. BLAS/LAPACK. Second Assignment. (Steven Dargaville)
7. 4/2 – Memory management and optimisation. Scaling. Overwriting. Introduction to templates. (Steven Dargaville)
8. 7/2 – Polymorphism in C++. Sparse CSR Formats. Introduction to PETSc. (Steven Dargaville)
9. 11/2 – Templates. Reference Counting. Dense and iterative methods for matrix inversion. (Steven Dargaville)
10. 14/2 – Wavelets (Steven Dargaville). An introduction to image processing and filters. (Adriana Paluszny)
11. 18/2 – An introduction to the architecture of a commercial Medical Imaging cloud-based software. (Adriana Paluszny + External Speaker(s))
12. 21/2 – Computer-based programming class test.

## Team

- Dr Adriana Paluszny - Royal Society Research Fellow - computational scientist and C++ devotee 
- Dr Steven Dargaville - Post-doctoral Research Associate - numerical methods connoisseur and advanced programmer
- Robin Thomas - Research Assistant, PhD Candidate and C++ expert
- Cristina Saceanu - PhD Student and C++ enthusiast

## Assignments and Evaluation

There will be three equally weighted computer-based coursework assignments (23.3% each). Assignments can be completed individually or in pairs. Submission will be via GitHub [details will follow].
1. Climate Change Focus: How can we predict temperature changes? ☀️🌤⛅️🌥☁️🌦🌧⛈🌩🌨
- ~~[[Due: 23/01]]~~ [[Due: 26/01]] 
- Description: [Assignment1](ACSE5-Assignment1.pdf) 
- **Please read completely before submitting your team**
- **Please use your city of choice to register your team** 
- *Registered teams thus far*: London, Singapore, Sydney, Vancouver, Oxford, Toronto, Sheffield, Heathrow, Durham, Cambridge, Mauna Loa, Southampton, Muscat, Paisley, Christmas Island, Bradford, Alice Springs
2. Implementing the Cholesky decomposition method. [[Due: 06/02]]
3. Implementing a medical imaging filter. [[Due: 20/02]]

There will be one computer-based programming class test (30%). The 'exam' will be a piece of coursework to be developed in-class during our last session, and shall be completed individually. [[On: 21/02]] 

## Feedback and Questions
- You can send any questions/feedback to Adriana (apaluszn@imperial.ac.uk) or Steven (s.dargaville@imperial.ac.uk) or ask any of the team members directly during class.
- If you would like to make a question or leave feedback anonymously: please go to www.menti.com and use the code 74 53 1
Try not to hurt our feelings though ! 🤓
