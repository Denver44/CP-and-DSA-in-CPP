#include <iostream>
#include <cstring>
using namespace std;

class Student
{
	int age;

public:
	char *name;

	Student(int age, char *name)
	{
		this->age = age;
		// Deep copy
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}

	// Copy constructor
	Student(Student const &s)
	{
		this->age = s.age;

		// Deep copy
		this->name = new char[strlen(s.name) + 1];
		strcpy(this->name, s.name);
	}

	void display()
	{
		cout << name << " " << age << endl;
	}
};

int main()
{

	char name[] = "abcd";
	Student s1(20, name);
	s1.display();

	name[3] = 'e';
	Student s2(24, name);
	s2.display();

	s1.display();
	return 0;
}
