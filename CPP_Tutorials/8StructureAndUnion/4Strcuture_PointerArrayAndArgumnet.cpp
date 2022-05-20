#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

struct Student
{
    int roll;
    int age;
    string name;
    string address;
};

void printStudent(const Student &s)
{
    cout << s.roll << ' '
         << s.name << ' '
         << s.age << ' '
         << s.address;
}

void structureWithPointerConcept()
{
    Point p = {10, 20};
    Point *ptr = &p;
    cout << ptr->x << ' ';
    ptr->x = 30;
    cout << p.x;
}

void structureWithArrayConcept()
{
    Point p[3];
    for (int i = 0; i < 3; i++)
    {
        p[i].x = i;
        p[i].y = i * 10;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << p[i].x << ' '
             << p[i].y << '\n';
    }
}

void argumentAsRefernceConcept()
{
    Student s = {2323, 38, "Sandeep", "GFG"};
    printStudent(s);
}

int main()
{
    structureWithPointerConcept();
    structureWithArrayConcept();
    argumentAsRefernceConcept();

    return 0;
}