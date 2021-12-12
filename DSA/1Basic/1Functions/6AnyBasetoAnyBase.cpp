#include <bits/stdc++.h>
using namespace std;

int Decimaltobase(int n, int b)
{
    int ans = 0;

    int p = 1;
    while (n)
    {
        int rem = n % b;
        n /= b;
        ans += rem * p;
        p = p * 10;
    }
    return ans;
}

int BasetoDecimal(int n, int b)
{

    int ans = 0;

    int p = 1;
    while (n)
    {
        int rem = n % 10;
        n /= 10;
        ans += rem * p;
        p = p * b;
    }
    return ans;
}

int main()
{
    int n, b1, b2;
    cin >> n >> b1 >> b2;
    int ans = BasetoDecimal(n, b1);
    cout << Decimaltobase(ans, b2);

    return 0;
}