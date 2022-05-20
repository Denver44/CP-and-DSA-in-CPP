#include <iostream>
using namespace std;

class complex
{
public:
    int real, img;

    friend complex operator+(complex c1, complex c2);

    complex operator-(complex c)
    {
        complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;
        return temp;
    }
};

complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main()
{
    complex c1, c2, c3, c4;

    c1.real = 5, c1.img = 3;
    c2.real = 10, c2.img = 5;

    c3 = c1 + c2;

    c3 = operator+(c1, c2);
    c4 = c2.operator-(c1);

    cout << c3.real << "+i" << c3.img << endl;
    cout << c4.real << "+i" << c4.img << endl;
}
