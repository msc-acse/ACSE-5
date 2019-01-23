#include <iostream>		// input/output standard library
#include <string>			// standard string library
#include <vector>

/*
using namespace std;

class Person
{
public:
	Person()
	{
		static int counter(0);
		std::cerr << "\nPerson Constructor" << counter++;
	}
	Person(const Person& s)
	{
		static int counter(0);
		std::cerr << "\nPerson COPY Constructor" << counter++;
	}
	~Person()
	{
		static int counter(0);
		std::cerr << "\nPerson Destructor" << counter++;
	}
	//write a mutator
	void SetName(std::string name)
	{ 
		name_ = name; 
	}
	//write an accesor
	virtual std::string GetName() 
	{ 
		std::cerr << "\n****Person GetName****";
		return name_; 
	}

//private:
protected:
	//let's describe a student
	std::string name_;
};

class Student : public Person
{
public:
	Student()
	{
		static int counter(0);
		std::cerr << "\nStudent Constructor" << counter++;
	}
	Student(const Student& s) 
	{ 
		static int counter(0);
		std::cerr << "\nStudent COPY Constructor" << counter++;
	} 
	~Student()
	{
		static int counter(0);
		std::cerr << "\nStudent Destructor" << counter++;
	}
	//write a mutator
	void SetName(std::string name) { Person::name_ = name; }
	//write an accessor
	std::string GetName() 
	{ 
		std::cerr << "\n****Student GetName****";
		return Person::name_;
	}

private:
	//let's describe a student
	int id_;
};*/

//move to another file - create .h and .cpp
/*class Programmer : public Person
{
public:
	Programmer()
	{
		static int counter(0);
		std::cerr << "\nProgrammer Constructor" << counter++;
	}
	Programmer(const Programmer& s)
	{
		static int counter(0);
		std::cerr << "\nProgrammer COPY Constructor" << counter++;
	}
	~Programmer()
	{
		static int counter(0);
		std::cerr << "\nProgrammer Destructor" << counter++;
	}
	//write a mutator
	void SetName(std::string name) { Person::name_ = name; }
	//write an accessor
	std::string GetName()
	{
		std::cerr << "\n****Programmer GetName****";
		return Person::name_;
	}

private:
	//let's describe a student
	int years_of_experience_;
};
*/
//int main()
//{
	//let's describe a student
	//{
		//std::vector<Student>  cohort; //stored 3 numbers: size, pointer, capacity
		//cerr << "\nSIZE:" << cohort.size() << " CAPACITY:" << cohort.capacity();
		//Student s1, s2;
		//cohort.push_back(s1);
		//cerr << "\nSIZE:" << cohort.size() << " CAPACITY:" << cohort.capacity();
		//cohort.push_back(s2);
		//cerr << "\nSIZE:" << cohort.size() << " CAPACITY:" << cohort.capacity();
		
		//Student s1;
		//s1.SetName("Ann Smith");
		//cerr << "\nStudent's name: " << s1.GetName();

		//Student *s1 = new Student();
		//s1->SetName("Ann Smith");
		//cerr << "\nStudent's name: " << s1->GetName();

		//Person *s1 = new Student();
		//s1->SetName("Ann Smith");
		//cerr << "\n" << s1->GetName();

		//Person *s2 = new Programmer();
		//s2->SetName("Beth Getty");
		//cerr << "\n" << s2->GetName();

		/*std::vector<Person*>  cohort; //stored 3 numbers: size, pointer, capacity
		cerr << "\nSIZE:" << cohort.size() << " CAPACITY:" << cohort.capacity();

		Student s1;
		cohort.push_back(&s1);//notice no more copy
		cerr << "\nSIZE:" << cohort.size() << " CAPACITY:" << cohort.capacity();

		Programmer p1;
		cohort.push_back(&p1);
		cerr << "\nSIZE:" << cohort.size() << " CAPACITY:" << cohort.capacity();

		for (Person* person : cohort)
		{
			cerr << "\n";
			person->GetName();
		}

		cerr << "\nFinished adding to vector!\n";*/
		
	//} //Automatic gargabe collection will happen

	//system("pause");
//}
	
	
