#include <iostream>
using namespace std;

class complex
{
private:
    int real, img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << real << "+i" << img << endl;
    }

    friend ostream &operator<<(ostream &out, complex &c);   // For cout we have to use (ostream &) for return type.
    friend istream &operator>>(istream &din, Complex &ob1); // For cin operator we have to use istream &
};

ostream &operator<<(ostream &out, complex &c)
{
    out << c.real << "+i" << c.img << endl;
    return out;
}
istream &operator>>(istream &din, Complex &ob1)
{
    din >> ob1.x >> ob1.y;
    return din;
}

int main()
{
    complex c(10, 5);
    cout << c;
    operator<<(cout, c);
    Complex t1, t2;
    cout << "Enter the number" << endl;
    cin >> t1;
    cin >> t2;
    t1.printadta();
    t2.printadta();

    return 0;
}