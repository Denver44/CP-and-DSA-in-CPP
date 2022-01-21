#include <iostream>
using namespace std;
void funb(int n);
void fun(int n)
{

    if (n > 0)
    {
        cout << n << endl;
        funb(n - 1);
    }
}
void funb(int n)
{

    if (n > 0)
    {
        cout << n << endl;

        fun(n / 2);
    }
}

int main()
{
    int x = 20;
    fun(x);
    return 0;
}