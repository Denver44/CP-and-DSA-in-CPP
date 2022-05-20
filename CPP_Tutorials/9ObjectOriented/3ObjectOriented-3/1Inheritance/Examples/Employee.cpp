#include <iostream>
#include <iomanip>

using namespace std;

class Employee
{
private:
    int eid;
    string name;

public:
    Employee(int e, string n)
    {
        eid = e;
        name = n;
    }
    int getEmployeeID() { return eid; }
    string getName() { return name; }
};

class FulltimeEmployee : public Employee
{
private:
    int salary;

public:
    FulltimeEmployee(int a, string n, int s) : Employee(a, n)
    {
        salary = s;
    }

    void displayFullTime()
    {
        cout << "Id NUmber :- " << getEmployeeID() << setw(10) << endl;
        cout << "Name      :- " << getName() << setw(10) << endl;
        cout << "salary    :- " << salary << setw(10) << endl;
        cout << "FUll time Employee  " << endl;
    }
};

class ParttimeEmployee : public Employee
{
private:
    int wage;

public:
    ParttimeEmployee(int a, string n, int w) : Employee(a, n)
    {
        wage = w;
    }
    void displayPartTime()
    {
        cout << "Id NUmber :- " << getEmployeeID() << setw(10) << endl;
        cout << "Name      :- " << getName() << setw(10) << endl;
        cout << "Daily Wage :- " << wage << setw(10) << endl;
        cout << "Part time Employee  " << endl;
    }
};
int main()
{
    FulltimeEmployee f1(1, "Tokyo", 25000);
    FulltimeEmployee f2(3, "Denver", 45000);
    ParttimeEmployee p1(1, "Sergio", 100);
    ParttimeEmployee p2(4, "Andres", 400);
    f1.displayFullTime();
    p1.displayPartTime();
}