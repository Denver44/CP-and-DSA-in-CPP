#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b, n1, n2;
    cin >> b >> n1 >> n2;

    int ans = 0;

    int p = 1;
    int c = 0;
    while (n1 > 0 || n2 > 0 || c > 0)
    {
        int rem1 = n1 % 10;
        int rem2 = n2 % 10;
        n1 /= 10;
        n2 /= 10;
        int rem = c + rem1 + rem2;
        c = rem / b;
        rem %= b;
        ans += rem * p;
        p = p * 10; // As we write in Oppsite direction so for that we mul of 10.
    }
    cout << ans;

    return 0;
}