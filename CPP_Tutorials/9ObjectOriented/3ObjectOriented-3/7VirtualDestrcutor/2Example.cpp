//------------------------------------ Using pointer of base class and inserting address of derived class in it---------------------------------
#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "Base class constructor" << endl;
    }

    virtual void fun() // late binding
    {
        cout << "Base class fun " << endl;
    }

    virtual ~base() // late binding
    {
        cout << "Base class destructor called " << endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "derived class constructor" << endl;
    }

    void fun()
    {
        cout << "derived class fun " << endl;
    }

    ~derived()
    {
        cout << "derived class destructor called " << endl;
    }
};

int main()
{
    base *d1 = new derived;
    d1->fun();
    delete d1;

    // perfect scenario

    base *d1 = new base;
    d1->fun();
    delete d1;

    derived *d2 = new derived;
    d2->fun();
    delete d2;

    return 0;
}