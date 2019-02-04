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
2. 17/01 – Functional programming. Input/output. Pointers and References. Introduction to containers. Functions: passing by value and reference. Static vs. dynamic arrays. [Slides2](Lecture%202.pdf) [Code](Lecture%202_code.zip) (Steven Dargaville) 
3. 21/01 - Introduction to objects (using objects). Overview of the standard template library (STL). Introduction to static and dynamic linking. Declarations and Definitions. enum, typedef, typename. Introduction to template functions. Factorial example. Introduction to STL containers: vectors, deque, list, map, set, multimap, multiset. Creating simple objects. Class, constructor, destructor. [Slides3](Lecture3.pdf) [Code3a](3main_const.cpp) [Code3b](3log1.cpp) [Code4](4main_template.cpp) [Code5](5main_stl_class_start.cpp) [Code6](6main_stl_containers.cpp) [Code7](7factorial.cpp) (Adriana Paluszny)
4. 24/01 – Object oriented programming (creating objects). Copy constructor, members, operators, mutators, accessors. MSVC Debugger. Introduction to Inheritance, Polymorphism & Encapsulation in C++. [Slides4](Lecture4.pdf) [Code8](10debug.cpp)  [Code9](10gnuplot.cpp) [Code11](11operators.cpp) [Code12](12class_copy_etal.cpp) [Code13](main_mandelbrot.cpp) [Code](Adriana Paluszny)  
5. 28/01 – **updated!** Libraries (static). Inheritance: Pure virtual functions (Creating interface objects). Function objects. STL Library: erase(), algorithms. Also: switch, isnan, isinf. Revisiting header and source files. [Code14](lecture5_code%202.zip) [Slides5](Lecture5.pdf) [Slides_ExtensiveReview](Lecture5-ExtensiveReview.pdf) [Slides_SummaryReview](Lecture5-SummaryReview.pdf) **[Homework](homework_lecture5.pdf)** [Glossary](http://www.stroustrup.com/glossary.html) (Adriana Paluszny)
6. 31/01 – Memory management with C++ and cache hierarchy. Applied to linear systems and matrices. BLAS/LAPACK. Second Assignment. [Slides6](Lecture%206.pdf) (Steven Dargaville)
7. 4/2 – More on BLAS/LAPACK. Assembly and optimisation. Vectorisation/MMX/SSE/SSE2. Introduction to templates. [Slides7](Lecture%207.pdf) (Steven Dargaville)
8. 7/2 – Polymorphism in C++. Sparse CSR Formats. Introduction to PETSc. (Steven Dargaville)
9. 11/2 – Templates. Reference Counting. Dense and iterative methods for matrix inversion. (Steven Dargaville)
10. 14/2 – A 30-min introduction to image processing and filters. (Adriana Paluszny) Wavelets (Steven Dargaville). 
11. 18/2 – An introduction to the architecture of a commercial Medical Imaging cloud-based software. (Adriana Paluszny + External Speaker(s))
12. ~~21/2 – Computer-based programming class coursework.~~ Revision day.
13. Individual in-class coursework. On: 27th of February 9:00-12:00 RSM3.01 **note classroom and date**

## Team

- Dr Adriana Paluszny - Royal Society Research Fellow - computational scientist and C++ devotee 
- Dr Steven Dargaville - Post-doctoral Research Associate - numerical methods connoisseur and advanced programmer
- Robin Thomas - Research Assistant, PhD Candidate and C++ expert
- Cristina Saceanu - PhD Student and C++ enthusiast

## Assignments and Evaluation

There will be three equally weighted computer-based coursework assignments (23.3% each). Assignments can be completed individually or in pairs. Submission will be via GitHub [details will follow].
1. Climate Change Focus: How can we predict temperature changes? ☀️🌤⛅️🌥☁️🌦🌧⛈🌩🌨
- ~~[[Due: 23/01]]~~ ~~[[Due: 26/01]]~~ midnight of Sunday 27th of January 
- Description: [Assignment1](ACSE5-Assignment1.pdf) 
- **Please read completely before submitting your team**
- **Please use your city of choice to register your team** 
- *Registered teams thus far*: London, Singapore, Sydney, Vancouver, Oxford, Toronto, Sheffield, Heathrow, Durham, Cambridge, Mauna Loa, Southampton, ~~Muscat~~, Paisley, Christmas Island, Bradford, Alice Springs, Tokyo, Eastbourne, Beijing
- ⚡️⚡️⚡️ Looking for a plotting solution? Try downloading [gnuplot](http://www.gnuplot.info), and use this code to get started [CodeGNUPLOT](10gnuplot.cpp)⚡️⚡️⚡️

2. Implementing a medical imaging filter. ~~[[Due: 08/02]]~~ midnight of Sunday 10th of February  (popular demand)
- Description: [Assignment2](ACSE5-Assignment2.pdf) 
- Create your team here: https://classroom.github.com/g/QrX-msjE (Yes, you can pick the same team as before, or a new team)

3. Implementing the Cholesky decomposition method. ~~[[Due: 20/02]]~~ Due: midnight of Friday 22/02

There will be one computer-based programming **final coursework** (30%). The final piece of coursework will be to be completed in-class during our last session, and shall be submitted individually. You will be able to make use of all the code you have written for any previous assignments; you will also have access to the internet during the assignment. ~~[[On: 21/02]]~~ On: 27th of February 9:00-12:00 RSM3.01 **note classroom and date change**

## Feedback and Questions
- You can send any questions/feedback to Adriana (apaluszn@imperial.ac.uk) or Steven (s.dargaville@imperial.ac.uk) or ask any of the team members directly during class.
- If you would like to make a question or leave feedback anonymously: please go to www.menti.com and use the code 74 53 1
Try not to hurt our feelings though ! 🤓
