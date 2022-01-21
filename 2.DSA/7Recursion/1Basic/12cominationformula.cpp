#include <iostream>
using namespace std;
int fact(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
        return fact(x - 1) * x;
}
int nCr(int n, int r)
{
    int num, den;
    num = fact(n);
    den = fact(r) * fact(n - r);

    return num / den;
}

int NCR(int n, int r)
{
    if (n == r || r == 0)
    {
        return 1;
    }
    else
    {
        return NCR(n - 1, r - 1) + NCR(n - 1, r);
    }
}
int main()
{
    cout << nCr(5, 2) << endl;
    cout << NCR(5, 2);

    return 0;
}