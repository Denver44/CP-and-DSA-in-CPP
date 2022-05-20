#include <iostream>
using namespace std;

/*
Object-Oriented Programming
Features of OOPS :-
• Abstraction
• Data Hiding
• Inheritance
• Polymorphism

Classes :-
• Class is a blue print of an object
• Class is a design of object
• Many object can be created from same class
• Object consumes memory equal to sum of sizes of all data members
• Member functions don’t occupy memory
• Member functions are called depending on object
• (.) Dot operator is used for accessing members of object
• Memory allocated for object is also called as instance
*/

class Rectangle
{
    int length, breadth; // by default everything you write it will be private and that's the basics difference of structure and classes.

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{

    Rectangle r1(5, 10);
    cout << r1.area() << endl;

    Rectangle r2 = Rectangle(4, 10);
    cout << r2.area() << endl;

    Rectangle r3 = Rectangle(3, 10);
    Rectangle *r3ptr = &r3;

    cout << r3ptr->area() << endl;

    Rectangle *r4 = new Rectangle(2, 10);
    cout << r4->area() << endl;

    delete r4;
    return 0;
}
