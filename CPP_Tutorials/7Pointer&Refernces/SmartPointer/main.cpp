#include <iostream>
#include <memory>
using namespace std;

struct A
{
    void func()
    {
        cout << "I am in the struct...." << endl;
    }
};

//   SMART POINTERS

void normalPointer()
{
    A *ptr = new A;
    ptr->func();
    cout << "Value of ptr " << ptr << endl;
    cout << "Address of ptr " << &ptr << endl;

    A **ptr2 = &ptr;
    (*ptr2)->func();
    cout << "Value of ptr " << ptr2 << endl;
}

void uniquePointer()
{

    unique_ptr<A> p1(new A);
    p1->func();
    cout << "ADDRESS OF POINTER  Unique P1 " << p1.get() << endl;
    cout << "ADDRESS OF POINTER  Unique P1 " << &p1 << endl;

    unique_ptr<A> p2 = move(p1);
    p1->func();
    cout << "ADDRESS OF POINTER after moving  Unique P1 to P2 " << p1.get() << endl;
    p2->func();
    cout << "ADDRESS OF POINTER Unique P2 " << p2.get() << endl;
}

void sharedPointer()
{
    shared_ptr<A> p3(new A);
    p3->func();
    cout << "ADDRESS OF POINTER  shared P3 " << p3.get() << endl;

    shared_ptr<A> p4 = p3;
    p3->func();
    cout << "ADDRESS OF POINTER after sharing shared P3 " << p3.get() << endl;
    p4->func();
    cout << "ADDRESS OF POINTER shared P3 " << p4.get() << endl;
}

int main()
{
    // normalPointer(); //  NORMAL POINTER
    uniquePointer(); //  UNIQUE POINTER

    // DIFFERENCE
    // 1. In Normal and Smart pointers is that In unique ptr this pointer is unique u cannot make a copy of this pointer it can be only move, using move func
    // 2. Shared pointer can be used to make a cop of it.
    return 0;
}
