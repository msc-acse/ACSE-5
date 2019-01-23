#include <iostream>				
#include <thread>

using namespace std;

static const int num_threads = 10;
/*
void call_from_thread()
{
	std::cout << "Hello, World" << std::endl;
}

void call_from_thread_with_param(int i)
{
	std::cout << "Thread " << i << std::endl;
}

int main() 
{
	std::thread t[num_threads];

	//Launch a group of threads
	for (int i = 0; i < num_threads; ++i) 
	{
		//t[i] = std::thread(call_from_thread);
		t[i] = std::thread(call_from_thread_with_param, i);
	}

	std::cout << "Launched from the main\n";

	//Join the threads with the main thread
	for (int i = 0; i < num_threads; ++i) 
	{
		t[i].join();
	}

	system("pause");
	return 0;
}*/