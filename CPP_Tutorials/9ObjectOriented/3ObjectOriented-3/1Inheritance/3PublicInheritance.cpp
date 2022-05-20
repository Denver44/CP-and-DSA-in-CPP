#include <iostream>
using namespace std;

class Base
{
private:
    void display1()
    {
        cout << "I am in display 1 and i am private" << endl;
    }

protected:
    void display2()
    {
        cout << "I am in display 2 and i am protected" << endl;
    }

public:
    void display3()
    {
        cout << "I am in display 3 and i am Public" << endl;
    }
};

class dervied : public Base
{
public:
    void display4()
    {
        display2(); // here we can access the protected member of the base class on the dervied class, because the protected member becomes public member but it can only access in the dervied class itself only.
        cout << "I am in display 4 and i m in dervied class" << endl;
    }
};

int main()
{
    dervied d;
    // d.display1(); // private cannot be inheritaed
    // d.display2(); // protected part cannot be access through dervied calass
    d.display3();
    d.display4();

    return 0;
}
