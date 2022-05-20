#include <iostream>
using namespace std;

class Student
{
private:
    int age;
    int &x; // age reference variable
    const int rollNumber;
    /*
    1. As the rule is there we have to initialize a const variable with a value at the time of creation but in class we can't do it so we have to use initializer for it.
    2. As we can't initalized a const data in a class we have to use initializer for it and it is must.
    */

public:
    // we cannot initialize a data in private section we have to use constructor or initializer like below to initialize a data.
    Student(int rollNo, int age) : rollNumber(rollNo), age(age), x(this->age)
    {
        this->age = 50;
        // rollNumber = r;
    }
    void print()
    {
        cout << age << " " << x << " " << rollNumber << endl;
    }
};

int main()
{
    Student s1(101, 20);
    s1.print();

    return 0;
}
