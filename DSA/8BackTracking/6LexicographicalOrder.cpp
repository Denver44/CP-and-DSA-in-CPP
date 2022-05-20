#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void helper(int s, int n)
{
    if (s > n) // if it is greater than n then return
    {
        return;
    }

    if (s <= n) // print
    {
        cout << s << endl;
    }

    for (int i = 0; i < 10; i++) //(10 -19)
    {
        helper(i + (s * 10), n);
    }
}

void lexicographicalOrder(int num)
{

    for (int i = 1; i <= 9; i++) //(as number are from 1 to 9)
    {
        helper(i, num);
    }
}

void solve()
{
    lexicographicalOrder(20);
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