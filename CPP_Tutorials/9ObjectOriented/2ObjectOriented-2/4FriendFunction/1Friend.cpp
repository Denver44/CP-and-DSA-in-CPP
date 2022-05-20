#include <iostream>
using namespace std;

/*
By making friend function only we can access the private protected data member of class
*/

class complex
{
private:
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int a, int b)
    {
        real = a;
        img = b;
    }

    // Syntax: friend returntype functionname()
    friend void addAndDisplay(complex, complex); // ONLY DECLARTION
};
void addAndDisplay(complex c, complex d)
{
    cout << (c.real + d.real) << " + " << (c.img + d.img) << "i" << endl;
}

int main()
{
    complex c1(3, 4);
    complex c2(3, 4);
    addAndDisplay(c1, c2);

    return 0;
}
