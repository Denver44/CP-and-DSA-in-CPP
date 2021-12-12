#include <iostream>
using namespace std;

int fun(int n)
{
    if (n > 0)
    {
        return fun(n - 1) + n;
    }
    else
    {
        return 0;
    }
}
int fun1(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int fun2(int n)
{

    return n * (n + 1) / 2;
}
int main()
{

    cout << fun(10) << endl;
    cout << fun1(10) << endl;
    cout << fun2(10) << endl;
    return 0;
}