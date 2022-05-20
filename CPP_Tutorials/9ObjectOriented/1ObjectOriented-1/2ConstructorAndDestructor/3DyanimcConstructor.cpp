#include <iostream>
using namespace std;
class addition
{
private:
    // both are pointer.
    int *x;
    int *y;

public:
    addition() {}
    addition(int a, int b)
    {
        x = new int; // new keyword helps to create dynamically object, or data at run time.
        y = new int;
        *x = a;
        *y = b;
    }
    void add()
    {
        int sum;
        sum = *x + *y;
        cout << sum;
    }
};

int main()
{
    addition o1(10, 20);
    o1.add();
    return 0;
}