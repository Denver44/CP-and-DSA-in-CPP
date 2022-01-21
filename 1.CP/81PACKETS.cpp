#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// for example we have 6 coins and as per question all coins have same value 1 and we have to find minium number of packets we have to make for amount x which lies between 1 to n including 1 and n and we cannot use same packet  for amount of x which we used earlier.
// eg 6  for 1 rupess 1 coin packet 2 rupess 1 1 coin  in one packet 3 coin we can use 2 and 1 packet but if we have to want 4 rupess we have 2 packet and 1 pakcet so for three also we make 3 coins in one pakcets after then for 4 -> 3 and 1 5-> 2 and 3 6 -> 1, 2,3

void solve()
{
    long n;
    cin >> n;
    if (n <= 2)
    {
        cout << n; // base case
        return;
    }
    int count = 0;
    while (n != 0)
    {
        n = n / 2;
        count++;
    }

    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}