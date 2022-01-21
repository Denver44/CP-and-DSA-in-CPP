#include <iostream>
using namespace std;

int power(int n, int x)
{
    if (x == 0)
    {
        return 1;
    }

    return n * power(n, x - 1);
}
int power2(int n, int x)
{
    if (x == 0)
    {
        return 1;
    }

    if (x % 2 == 1)
    {
        return n *  power2(n*n, x / 2);
    }

    return  power2(n * n, x / 2);
}

int main()
{
    // cout << power(2, 4);
    cout << power2(2, 8);

    return 0;
}