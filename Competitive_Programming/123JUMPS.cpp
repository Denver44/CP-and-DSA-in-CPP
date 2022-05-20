#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// simple question we have to see the pattern here
//  we will move y till it get equal to destination or get greater than destination.
// as if the y is just greater than destination by 1. then we have to just add 1 to jumps and that will be the answer.
// as the y- dest diff is grater than one then we jhave to make some chnages in our jumps to reacher ther under that y
// eg if dest is 16 and we move y 6 jumps and reach 21 -> 0 1 3  6  10 15 21
//  then by subtracting y- dest -1 we get the jump name which we should not take in place we have t reverse back by -1.
// 21 -16 = 5-1 4 jumps should not be taken
// 0 -st Jump-> 1 -2nd Jump-> 3 -3rd Jump ->6 -> 4 jump -1 so we reach 5 - 5th Jump -> 10 -6 th Jump ->16

void solve()
{
    int dest;
    cin >> dest;
    int jumps = 0;
    int y = 0;
    for (int i = 1;; i++)
    {
        if (y >= dest)
            break;
        y += i;
        jumps++;
    }

    if (y == dest || y - dest > 1)
    {
        cout << jumps << endl;
        return;
    }
    else if (y - dest == 1)
    {
        cout << jumps - 1 << endl;
        return;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
