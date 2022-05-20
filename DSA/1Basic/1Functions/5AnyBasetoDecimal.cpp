#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b;
    cin >> n >> b;
    int ans = 0;

    int p = 1;
    while (n)
    {
        int rem = n % 10; // As we want toc convet to Decimal so takes remainer base 10.
        n /= 10;          // divide by 10
        ans += rem * p;   //muliply the number by the orignal Base.
        p = p * b;
    }
    cout << ans;

    return 0;
}