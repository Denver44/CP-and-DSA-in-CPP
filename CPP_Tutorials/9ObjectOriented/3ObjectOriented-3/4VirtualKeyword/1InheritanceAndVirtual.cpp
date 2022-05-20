#include <iostream>
using namespace std;

/*
Note :-

Here in base class a variable val is there it is inherited in derived1 and derived2 now this both class val in there as data member now derived there is made of derived1 and derived2 so there will be ambiguity that which val to take derv1 or derv2 so in this kind of problem we used virtual keyword it helps us to solve the problem of ambiguity it tells the compiler that both are virtual class and the class which is mentioned right more giver first perfence to it.

*/

class base
{
protected:
    int val;
};

class derived1 : virtual public base
{
public:
    derived1()
    {
        val = 1;
    }
};

class derived2 : virtual public base
{

public:
    derived2()
    {
        val = 2;
    }
};

class derived3 : public derived1, public derived2 // here the right most get more perfence.
{

public:
    // int val = 3;
    void printdata() // derived class virtual then there will be no problem of ambiguity.
    {
        cout << "The value of int is" << val << endl;
    }
};

int main()
{
    derived3 ob1;
    ob1.printdata();

    return 0;
}
