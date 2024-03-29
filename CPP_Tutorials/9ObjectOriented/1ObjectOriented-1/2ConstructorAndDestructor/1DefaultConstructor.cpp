#include <iostream>
using namespace std;

/*
Characteristics of Constructors
1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address

A constructor is a special member function with the same name as of the class amd used to initialize the objects of the class and automatically invoked whenever an object is created
*/

class Complex
{
    int a, b;

public:
    Complex(void); // Constructor declaration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // This is a default constructor as it takes no parameters and definiton
{
    a = 0;
    b = 0;
    // cout<<"Hello world";
}

int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}
