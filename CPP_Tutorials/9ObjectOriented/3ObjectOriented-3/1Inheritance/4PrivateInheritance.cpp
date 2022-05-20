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

class dervied : private Base
{
public:
    void display4()
    {
        cout << "I am in display 4 and i m in dervied class" << endl;
        display3(); // public member of base class can be access here but now it become private member now further class cannot  inherit these property.
        display2(); // protected member of base class can also be access here only but now no further class can also inherit these property.
    }
};
class dervied2 : public dervied
{
public:
    void display5()
    {
        cout << "Is am in display 5 and i m in dervied2 class" << endl;
        display4(); // Here we cannot access the Display3 and Dipslay2 Directly as they are now become private.
    }
};

int main()
{
    dervied2 d;
    d.display5();

    return 0;
}
