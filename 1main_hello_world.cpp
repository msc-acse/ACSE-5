#include <iostream>		// input/output standard library
#include <string>			// standard string library

int main()
{
	//std::cout << "\nHello World!";
	//std::cerr
	//system("pause");
	//comments, headers, main structure, brackets, semi-colon at end
	//errors: compiler, linker or execution time
	//project properties
	//namespaces

	//std::cout << "Please enter your first name (followed " << "by 'enter'):\n";
	//std::string first_name; // A variable has a type: string

	//The type of a variable determines what operations we can do on it
	//Here, cin >> first_name; reads characters until a whitespace character is seen(“a word”)
	//	White space : space, tab, newline, …

	//std::cin >> first_name; // We read into a variable
	//std::cout << "Hello, " << first_name << '\n';
	//system("pause");

	//////////////////////////// READING TWICE
	/*std::cout << "please enter your first and second names\n";
	std::string first;
	std::string second;
	std::cin >> first >> second;		// read two strings
	std::string name = first + ' ' + second;	// concatenate strings
						// separated by a space
	std::cout << "Hello, " << name << '\n';
	system("pause");*/

	//////////////////////////// INTEGERS
	/*std::cout << "please enter your first name and age\n";
	std::string first_name;		// string variable
	int age;			// integer variable
	std::cin >> first_name >> age;	// read
	std::cout << "Hello, " << first_name << " age " << age << '\n';
	system("pause");*/

	//////////////////////////// SIMPLE ARITHMETIC
	// do a bit of very simple arithmetic:
	/*std::cout << "please enter a floating-point number: "; // prompt for a number
		double n;					    // floating-point variable
		std::cin >> n;
		std::cout << "n == " << n
			<< "\nn+1 == " << n + 1		             // '\n' means “a newline”
			<< "\nthree times n == " << 3 * n
			<< "\ntwice n == " << n + n
			<< "\nn squared == " << n * n
			<< "\nhalf of n == " << n / 2
			<< "\nsquare root of n == " << sqrt(n)    // library function
			<< '\n';
		system("pause");*/

		//SIMPLE COMPUTATION - WHILE
		//A while-statement repeatedly executes until its condition becomes false
		/*const double cm_per_inch = 2.54;    // number of centimeters per inch
		int length = 1;		         // length in inches - notice int//switch to double
		while (length != 0) 		         // length == 0 is used to exit the program
		{ 			// a compound statement (a block)
			std::cout << "Please enter a length in inches: ";
			std::cin >> length;
			std::cout << length << "in.  = "
				<< cm_per_inch * length << "cm.\n";
		}
		system("pause");*/

		//TYPES
		/*int a = 7;
		int b = 9;
		char c = 'a';
		double x = 1.2;
		std::string s1 = "Hello, world";
		std::string s2 = "1.2";
		auto x = 1;
		auto y = "hello!";

		int a = 7;
		a = 9;
		a = a + a;
		a += 2;
		++a;
		*/

		//IMPLICIT NARROWING - A type-safety violation
		// Beware: C++ does not prevent you from trying to put a large value
		// into a small variable (though a compiler may warn you)
	/*int a = 20000;
	char c = a;
	int b = c;
	if (a != b)	    	//  != means “not equal”
		std::cout << "oops!: " << a << "!=" << b << '\n';
	else
		std::cout << "Wow! We have large characters\n";
	system("pause");*/

	//unexpected changes
	//double d = 1.14;
	//int i = d;
	//std::cout << "d(double): " << d << " vs e(int): " << i << '\n';
	//system("pause");

	//A type-safety violation (Uninitialized variables)
	//Beware: C++ will prevent you from trying to use a variable // Depending on your compiler settings!
	//before you have initialized it  (though a compiler typically warns)
	/*int x;		// x gets a “random” initial value
	char c; 	// c gets a “random” initial value
	double d; 	// d gets a “random” initial value
			//     – not every bit pattern is a valid floating-point value
	double dd = d;	// potential error: some implementations
				// can’t copy invalid floating-point values
	std::cout << " x: " << x << " c: " << c << " d: " << d << '\n'; // this will not compile
	*/

	//static "type casting" and type-safety violation 
	/*for (int i = CHAR_MIN; i < CHAR_MAX; i++)
	{
		char c = char(i);
		std::cout << "\t[" << i << ":" << int(c) << ":" << c << "]";
	}
	std::cout << "\nINT:" << INT_MIN << " " << INT_MAX << " size in bytes: " << sizeof(int);
	std::cout << "\nLONG:" << LONG_MIN << " " << LONG_MAX << " size in bytes: " << sizeof(long);//INT=LONG only in MS!
	std::cout << "\nLONG LONG:" << LLONG_MIN << " " << LLONG_MAX << " size in bytes: " << sizeof(long long);
	std::cout << "\nDOUBLE:" << DBL_MIN << " " << DBL_MAX << " size in bytes: " << sizeof(double);
	std::cout << "\nFLOAT:" << FLT_MIN << " " << FLT_MAX << " size in bytes: " << sizeof(float);
	//show unsigned 
	//show string
	//types will depend on your operating system/implementation of c++
	system("pause");*/
}
