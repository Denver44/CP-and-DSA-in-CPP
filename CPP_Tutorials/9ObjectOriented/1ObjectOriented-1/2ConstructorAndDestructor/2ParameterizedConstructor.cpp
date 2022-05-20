#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x) // tis take one
    {
        a = x;
        b = 0;
    }

    Complex(int, int); // Constructor declaration parametrized constructor. declartion.

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
    // cout<<"Hello world";
}

int main()
{
    // Implicit call
    Complex a(4, 6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();

    Complex c = 3; // if the constructor take single argument we can invoked like this also.
    c.printNumber();
    return 0;
}
