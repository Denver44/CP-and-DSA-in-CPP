#include <iostream>
using namespace std;

class Complex; // this forward declartion of complex

class Calc
{

public:
    // individually making friend function
    int sumrealcomplex(Complex, Complex); // here only define the datatype complex dont write o1 or o2 other wise compiler will get confused and throw error.
    int sumIMcomplex(Complex, Complex);   // only declare
};

class Complex
{
    // here we have make the friend both the class by friend using and scope resolution to make the friend of calc to complex/
    // friend int calc ::sumrealcomplex(Complex, Complex);
    // friend int calc ::sumIMcomplex(Complex, Complex);
    // alter method to making wht whole class calc friend of complex ust write
    friend class Calc; // so now calc class can use the private data of the Complex.
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calc ::sumrealcomplex(Complex o1, Complex o2) // here complete definition of the declartion is done here.
{
    return (o1.a + o2.a);
}
int Calc ::sumIMcomplex(Complex o1, Complex o2) // here we are defining the member function of calc outside so we msut scope resolutor .
{
    return (o1.b + o2.b);
}

int main()
{
    Complex x1, x2;
    x1.setNumber(4, 5);
    x2.setNumber(2, 4);
    Complex x5;
    Calc x3, x4;
    cout << x3.sumrealcomplex(x1, x2) << endl;
    cout << x4.sumIMcomplex(x1, x2) << "i" << endl;

    return 0;
}

/*
1. If u want to make the class A friend of  your Class B then just write friend class A;
2. If u want to make one function of that class as friend then write   // friend int calc ::sumrealcomplex(Complex, Complex);
*/