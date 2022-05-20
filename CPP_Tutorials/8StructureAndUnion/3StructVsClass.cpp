#include <iostream>
using namespace std;

class BaseClass
{
public:
    // make private variables public
    int x;
};

// make derivation public also
class DerivedClass : public BaseClass
{
};

struct BaseStruct
{
    // By default it will be Public
    int x;
};

// Need not specify public keyword
struct DerivedStruct : BaseStruct
{
};

int main()
{
    {
        DerivedStruct d;
        d.x = 20;
        cout << d.x << '\n';
    }

    {
        DerivedClass d;
        d.x = 20;
        cout << d.x << '\n';
    }

    return 0;
}

// That's why we used Class over Struct as in class data members are protected by default.