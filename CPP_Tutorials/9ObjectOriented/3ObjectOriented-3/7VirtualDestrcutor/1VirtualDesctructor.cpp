#include <iostream>
using namespace std;

class base
{
public:
    // why we use virtual destructor as to destroy the first the derived class destructor then the base class destructor the virtual key helps us to late bind the .
    virtual ~base() // This will help us to do late binding so dervied first will be destory then base class will destroy
    {
        cout << "destructor of base" << endl;
    }
};

class derived : public base
{
public:
    ~derived()
    {
        cout << "destructor of derived" << endl;
    }
};
void fun()
{
    base *p = new derived();
    delete p;
}
int main()
{
    fun();
}