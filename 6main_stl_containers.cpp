#include <iostream>		// input/output standard library
#include <string>			// standard string library
#include <fstream>			

#include <vector>			
#include <deque>			
#include <list>			
#include <set>			
#include <map>			
#include <unordered_set>	
#include <unordered_map>	

#include <iterator>	
#include <algorithm>	
#include <numeric>	
#include <functional>	

using namespace std;

template<typename T> T fact(T c);

int main()
{
	std::vector<double> vFactorials_;
	std::map<double, double> mNumber_to_factorials_;
	for (double i = 0; i < 100; i++)
	{
		vFactorials_.push_back(fact<double>(i));
		mNumber_to_factorials_.insert(make_pair(i,fact<double>(i)));
	}
	
	std::vector<double> v1;
	std::set<double> s1;
	std::unordered_set<double> us1;
	std::map<double, double> m1;
	std::multimap<double, double> mm1;
	for (double i = 0; i < 100; i++)
	{
		int j = rand() % 15;
		v1.push_back(fact<double>(j));
		s1.insert(fact<double>(j));
		us1.insert(fact<double>(j));
		m1.insert(make_pair(j, fact<double>(j)));
		mm1.insert(make_pair(j, fact<double>(j)));
	}
	
	cerr << "\n\n****VECTOR:";
	for(auto d : v1)
		cerr << "\t" << d;
	cerr << "\n\n****SET:";
	for (auto d : s1)
		cerr << "\t" << d;
	cerr << "\n\n****UN-SET:";
	for (auto d : us1)
		cerr << "\t" << d;
	cerr << "\n\n****MAP:";
	for (auto d : m1)
		cerr << "\t" << d.first << "-" << d.second;
	cerr << "\n\n****MULTIMAP:";
	for (auto d : mm1)
		cerr << "\t" << d.first << "-" << d.second;

	cerr << "\nLast One! ";
	cin.get();
}