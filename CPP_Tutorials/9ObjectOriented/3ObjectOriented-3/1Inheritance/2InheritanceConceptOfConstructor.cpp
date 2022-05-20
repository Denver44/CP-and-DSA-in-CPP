
#include <iostream>
using namespace std;
//  program for using base and derived class

class base
{
public:
    base()
    {
        cout << "Base non-param base" << endl;
    }
    base(int x)
    {
        cout << "Base param of base " << x << endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "non-param derived" << endl;
    }
    derived(int y)
    {
        cout << "param of derived " << y << endl;
    }
    derived(int x, int y) : base(x)
    {
        cout << "param of derived" << endl;
    }
};
int main()
{
    derived(5, 10);
    // derived(5);
    return 0;
}
