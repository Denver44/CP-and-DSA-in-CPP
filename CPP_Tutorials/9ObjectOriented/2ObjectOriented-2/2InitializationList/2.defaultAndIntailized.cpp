
#include <iostream>
using namespace std;

class test
{
private:
    int x;

public:
    test(int x = 0) : x(x) // here we have make two type of constructor one  is default and another ome is with value.
    {
    }
    void printadta()
    {
        cout << x << endl;
    }
};

int main()
{

    test t1(4), t2;
    t1.printadta();
    t2.printadta();

    return 0;
}
