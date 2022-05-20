#include <iostream>
using namespace std;

class A
{

public:
    void printmeassage()
    {
        cout << "Class A print meassage function" << endl;
    }
};

class B
{

public:
    void printmeassage()
    {
        cout << "Class B print meassage function" << endl;
    }
};

class AB : public A, public B
{

public:
    // You have to must overide the function other wise ambiguity problem occur
    // This problem can be solved using scope resolution function to specify which function to class either base1 or base2
    void printmeassage()
    {
        // In this we can call them inside a Function
        A::printmeassage();
        // B::printmeassage();
        // cout << "Class AB print meassage function" << endl;
    }
};
int main()
{
    AB ob1;
    ob1.printmeassage();
    //  Or using classname respectively we can that function
    ob1.A::printmeassage();
    ob1.B::printmeassage();
    return 0;
}
