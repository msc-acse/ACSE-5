#include <iostream>
#include <chrono>
#include <ctime>
#include <fstream>

#include <iostream>
using namespace std;

/*
//bool isPrime(int number)
bool isPrime(long number)
{
	//for (int a = 2; a < number; a++)
	//for (int a = 2; a < number / 2; a++)
	for (long a = 2; a <= sqrt(number); a++)
	{
		if (number % a == 0)
		{
			return false;
		}
	}
	return true;
}

//int compute_primes(int maximum_value)
//int compute_primes(int amount)
int compute_primes(int amount, long min_value)
{
	int total_primes(0);
	//for (int currentNum = 2; ; currentNum++)///currentNum < maximum_value
	for (long currentNum = min_value; ; currentNum++)
	{
		if (isPrime(currentNum))
		{
			//std::cout << endl << currentNum << " ";
			total_primes++;
			if (total_primes == amount) return total_primes;
		}
	}
//return total_primes;
return 0;
}

int main()
{
	//instrument = measure time
	std::chrono::time_point<std::chrono::system_clock> start, end;

	//int j100 = 1'000'000;
	//std::cerr << "\nJ:" << j100;
	//system("pause");

	int test = 0;
	int minValue(0);
	std::cerr << "\nAmount of prime numbers:";
	std::cin >> test;
	std::cerr << "\nMinimum prime number:";
	std::cin >> minValue;

	// Start 
	start = std::chrono::system_clock::now();

	std::cout << "f(" << test << ") = " << compute_primes(test, minValue) << '\n';

	// End 
	end = std::chrono::system_clock::now();

	// Compute Elasped time 
	std::chrono::duration<double> elapsed_seconds = end - start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);

	std::ofstream ofs("test-function-times.txt", std::ios::trunc);

	std::cout << "finished computation ";// at " << std::ctime(&end_time)
	std::cout << "  elapsed time: " << elapsed_seconds.count() << "s\n";

	ofs << "finished computation ";// at " << std::ctime(&end_time)
	ofs << "  elapsed time: " << elapsed_seconds.count() << "s\n";

	int times(0);
	std::cerr << "\nHow many times? ";
	std::cin >> times;

	//////////////////////////////////
	double avg_f(0);
	for (int z = 0; z < times; z++)
	{
		int itest = test;
		// Start 
		start = std::chrono::system_clock::now();

		ofs << "f(" << itest << ") = " << compute_primes(itest, minValue) << '\n';

		// End 
		end = std::chrono::system_clock::now();

		// Compute Elasped time 
		std::chrono::duration<double> elapsed_seconds = end - start;
		std::time_t end_time = std::chrono::system_clock::to_time_t(end);

		ofs << "finished computation ";// at " << std::ctime(&end_time)
		ofs << "  elapsed time: " << elapsed_seconds.count() << "s\n";

		std::cout << "\nTest:" << itest << "  elapsed time: " << elapsed_seconds.count() << "s";
		avg_f += elapsed_seconds.count();
	}
	std::cout << "\nAvg: " << avg_f / double(times);
	ofs.close();

	system("pause");
}
*/
