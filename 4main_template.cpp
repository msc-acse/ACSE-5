#include <iostream>		// input/output standard library
#include <string>			// standard string library

using namespace std;

//first
/*int fact(int c)
{
	int factorial = 1;
	for (int i = 1; i <= c; i++)
	{
		factorial *= i;
	}
	return factorial;
}*/

//then we generalise it
/*template<typename T>
T fact(T c)
{
	T factorial = 1;
	for (T i = 1; i <= c; i++)
	{
		factorial *= i;
	}
	return factorial;
}

int main()
{
	//look at the differences in the output when we change the types
	//what is happening?
	cerr << "\nFactorials ";
	for (int i = 0; i < 100; i++)//try 500
	{
		//cerr << "\n" << i << ":\t" << fact(i);
		cerr << "\n" << i << ":\t" << fact<int>(i);
		cerr << ":" << fact<long long>(i);
		cerr << ":" << fact<double>(i);
		cerr << ":" << fact<long double>(i);
	}
	cin.get();
	return 0;
}*/