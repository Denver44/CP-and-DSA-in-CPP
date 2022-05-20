#include <iostream>
using namespace std;

class complex
{
private:
    int a = 0, b = 0;
    float c = 0.0f;

public:
    // The Constructor overloading is same as the function overloading and for the constructor overloading the argument must be different by datatype or number of argument.
    complex() // default Constructor
    {
        a = 0;
        b = 0;
        c = 0.0;
    }

    complex(int x) // parametrized Constructor because here we have pass the arguments to it thats why we calls them paramterised argument.
    {
        a = x;
        b = 0;
    }

    complex(float x)
    {
        c = x;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printdata()
    {
        cout << a << " + " << b << "i" << c << "f" << endl;
    }
};

int main()
{

    complex c1;
    complex c2(4);
    complex c3(6, 8);
    complex c4(4.2f);
    c1.printdata();
    c2.printdata();
    c3.printdata();
    c4.printdata();
    return 0;
}