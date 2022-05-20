#include <iostream>
using namespace std;

class Number
{
    int a, b;

public:
    Number() // When no default constructor is found, compiler supplies its own default constructor
    {
        cout << "Default Constructor called" << endl;
        a = 0;
        b = 0;
    }

    Number(int num1, int num2)
    {
        cout << "Paramterised Constructor called" << endl;
        a = num1;
        b = num2;
    }

    Number(Number &obj) //  When no copy constructor is found, compiler supplies its own copy constructor and  for copy constructor we have to use (&) as the obj here is pass by reference from the main function otherwise it will go to infinite loop stage.
    {
        cout << "Copy constructor called!!!" << endl;
        this->a = obj.a;
        this->b = obj.b;
    }
    void display()
    {
        cout << "The value for this object is " << a << " " << b << endl;
    }
};
int main()
{
    Number z(45, 56);

    Number z1(z); // Copy constructor invoked

    z1.display();
    Number z2; // Default constructor invoked

    z2 = z; // NOTE :- Copy constructor not called here COPY ASSIGNMENT OPERATOR is called by compiler and it will do the copy for us but One Important Note as this will do shallow copy not deep copy for deep copy create your own copy or assignment constructor

    cout << "The Z2 Object is called " << endl;
    z2.display();

    Number z3 = z; // Copy constructor invoked here we have make the z3 inline and also assgin z to it. thats why its called copy constructor.
    z3.display();

    // For Dynamically

    Number *z5 = new Number(z);
    z5->display(); // OR this way also we can call (*z5).display();

    Number z6(*z5);
    z6.display();

    // Copy assignment Operator
    // Simply for Dynamic allocated variable de-refernce it and then we can assign value to it.
    Number *z8 = new Number();
    (*z8) = z;
    (*z8).display();

    return 0;
}
