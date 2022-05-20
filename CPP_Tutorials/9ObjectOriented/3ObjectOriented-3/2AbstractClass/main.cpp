#include <iostream>
using namespace std;

// To make some function compulsory in derived class we make base class as abstract class so then u must override that function in deried class.
class car
{
public:
    virtual void start() = 0; // PURE VIRTUAL FUNCTION OR ABSTRACT CLASS
};
class innova : public car
{
public:
    void start()
    {
        cout << "innova started" << endl;
    }
};
class swift : public car
{
public:
    void start()
    {
        cout << "swift started" << endl;
    }
};
int main()
{
    // car c;
    // only pointer of base class can be construct but no object.
    car *p = new innova();
    p->start();
    p = new swift();
    p->start();
}