#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return fact(n - 1) * n;
    }
}
int fact1(int n)
{
    int sum = 1;
    int j = 1;
    while (j <= n)
    {
        sum = sum * j;
        j++;
    }
    return sum;
}

int main()
{

    // cout << fact(3);
    // cout << fact1(5);

    return 0;
}