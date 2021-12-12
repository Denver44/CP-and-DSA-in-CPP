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
        int rem = n % b;
        n /= b;
        ans += rem * p;
        p = p * 10;
    }
    cout << ans;

    return 0;
}