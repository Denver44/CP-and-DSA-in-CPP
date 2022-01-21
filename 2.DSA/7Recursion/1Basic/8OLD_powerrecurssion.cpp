#include <iostream>
using namespace std;

int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return pow(m, n - 1) * m;
}
int pow2(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return pow2(m * m, n / 2);
    }

    else
        return m * pow2((m * m), (n-1)/ 2);
}
void pzz(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "PRE +" << n << endl;
    pzz(n - 1);
    cout << "IN +" << n << endl;
    pzz(n - 1);
    cout << "POST +" << n << endl;
}
int main()
{
    // cout << pow(2, 9) << endl;
    cout << pow2(2, 9) << endl;
    cout << pow2(2, 8) << endl;
    // pzz(3);
    return 0;
}