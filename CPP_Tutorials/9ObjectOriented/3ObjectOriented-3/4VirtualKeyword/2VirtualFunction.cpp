#include <iostream>
using namespace std;

class base
{
public:
    virtual void fun()
    {
        cout << "fun of base" << endl;
    }
};
class derived : public base
{
public:
    void fun()
    {
        cout << "fun of derived" << endl;
    }
};

class basicCar
{
public:
    virtual void start()
    {
        cout << "basic car started" << endl;
    }
};
class advanceCar : public basicCar
{
public:
    void start()
    {
        cout << "advance car started" << endl;
    }
};

int main()
{
    derived d;
    d.fun();
    base *ptr = &d; // NOTE:- as here we are making a pointer of base class and object of derived class thats why we used virtual so late binding occur and derived class function get exected as in pointer the derived class object is there.
    ptr->fun();

    basicCar *p = new advanceCar();
    p->start();
    return 0;
}
