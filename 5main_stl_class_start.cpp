#include <iostream>		// input/output standard library
#include <string>			// standard string library
#include <vector>

using namespace std;

//simple class
enum DegreeType { Undergraduate, MSc, PhD };
enum Department { EarthScience, ComputerScience, Mathematics };

string randomName(int len)
{
	string a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	string r;
	for (int i = 0; i < len; i++) r.push_back(a.at(size_t(rand() % 62)));
	return r;
}

class Student
{
public:
	Student()
	{
		static int counter(0);
		
		std::cerr << "\nConstructor" << counter++;
		name = "NoName";
		student_id = 0;
		type_of_degree = Undergraduate;
		department = EarthScience;
	}
	Student(const Student& s) 
	{ 
		static int counter(0);
		std::cerr << "\nCopy Constructor" << counter++;
		name = s.name;
		student_id = s.student_id;
		type_of_degree = s.type_of_degree;
		department = s.department;
	} 
	~Student()
	{
		static int counter(0);
		std::cerr << "\nDestructor" << counter++;
	}
	void Random()
	{
		name = randomName(10);
		student_id = rand()%100000;
		type_of_degree = DegreeType(rand() % 2);
		department = Department(rand() % 2);
	}
	void Print()
	{
		//first version
		//cout << "\nName: " << name;
		//cout << "\tID: " << student_id;
		//cout << "\tType of degree: " << type_of_degree;
		//cout << "\tDepartment: " << department;
		
		//second version
		cout << "\nName: " << name;
		cout << "\t" << float_that_we_forgot;
		cout << "\tID: " << student_id;
		cout << "\tType of degree: ";
		if (type_of_degree == Undergraduate) cout << "Undergraduate";
		if (type_of_degree == MSc) cout << "MSc";
		if (type_of_degree == PhD) cout << "PhD";
		
		cout << "\tDepartment: ";
		switch (department) //its a multiple selection if statement
		{
		case EarthScience:
			cout << "EarthScience";
			break;
		case ComputerScience:
			cout << "ComputerScience"; 
			break;
		case Mathematics:
			cout << "Mathematics";
			break;
		default:
			break;
		}
	}
private:
	//let's describe a student
	std::string name;
	int student_id;
	DegreeType type_of_degree;
	//std::string degree;
	Department department;
	double float_that_we_forgot;
};

//int main()
//{
	//let's describe a student
	//std::string name;
	//int student_id;
	//std::string type_of_student;
	//std::string degree;
	//DegreeType degree;

	//Student s1;
	//s1.Print(); //first without constructor
	//cin.get();

//then create constructor
	//printout
	//and destructor

	//now moved into a class
	//{
	//	std::vector<Student>  cohort;
		//{//add this after the print outs

		//	Student s1;
			//cohort.push_back(s1);
		//}
		//cerr << "\nNow delete vector!";
	//}
	//why is the destructor called twice?

	/*{
		Student  cohort[3];
		for(int i = 0; i < 3; i++)
		{
			Student s1;
			s1.Random();
			cohort[i] = s1;
		}
		cerr << "\nNow printing:";
		for (auto s : cohort)
			s.Print();
		cerr << "\nNow delete vector!";
	}*/ //internal representations may copy/destruct the objects more often than we think

	//why destructing so many times? what is happening???
	//the copy constructor is being called
//	cin.get();
//}