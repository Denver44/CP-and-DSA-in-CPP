#include <iostream>
using namespace std;
class Complex
{
private:
    double r, i;

public:
    Complex(double real = 0, double img = 0)
    {
        r = real;
        i = img;
    }
    void display()
    {
        cout << "complex number  " << r << "  " << i << "i" << endl;
    }
    Complex operator-()
    {
        Complex temp;
        temp.r = -r;
        temp.i = -i;
        return temp;
    }
};

int main()
{
    Complex c1(1.5, 1.3), c2;
    c1.display();
    c2 = -c1;
    c1.display();
    c2.display();

    return 0;
}
