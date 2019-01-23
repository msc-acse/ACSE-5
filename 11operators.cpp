#include <string>
#include <iostream>

using namespace std;
/*
class Alpha 
{
public:
	Alpha operator*(const Alpha& other_alpha)
	{
		Alpha copy;
		copy.alpha_ = alpha_ + "FRIEND_OF" + other_alpha.alpha_;
		return copy;
	}
	Alpha operator+(const Alpha& other_alpha)
	{
		Alpha copy;
		copy.alpha_ = alpha_ + "EATS" + other_alpha.alpha_;
		return copy;
	}
	Alpha& operator+=(const Alpha& other_alpha)
	{
		*this = *this + other_alpha;
		return *this;
	}
	string alpha_;
};

int main()
{
	Alpha hans;
	hans.alpha_ = "Hans";
	Alpha gretel;
	gretel.alpha_ = "Gretel";
	Alpha witch;
	witch.alpha_ = "Witch";
	witch += hans;
	witch += gretel;
	cout << "\nA: " << (hans*gretel).alpha_ << "\n";
	cout << "\nB: " << witch.alpha_ << "\n";
	system("pause");
}*/