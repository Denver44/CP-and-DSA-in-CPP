#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// ------------------------------------- Recursive + memoization top-Down Approach ----------------------------
// O(N)
int tab[1000001] = {0};
int countStepsToOne(int n)
{
    if (n == 1)
        return 0;
    if (tab[n] != 0)
        return tab[n];

    int a = INT32_MAX, b = INT32_MAX, c = INT32_MAX;
    a = countStepsToOne(n - 1) + 1;
    if (n % 2 == 0)
    {
        b = countStepsToOne(n / 2) + 1;
    }
    if (n % 3 == 0)
    {
        c = countStepsToOne(n / 3) + 1;
    }

    return tab[n] = min(a, min(b, c));
}
// --------------------------------- Iterative Approach Tabulation Method Bottom-Up------------------------
// O(N) time
int countStepsToOne(int n)
{
    vector<int> tab(n + 1, INT32_MAX);
    tab[1] = 0;
    tab[2] = 1;
    tab[3] = 1;
    for (int i = 4; i <= n; i++)
    {
        // HEre what we do if by subratcting one it take less step then take it.
        //  els eif dividing by 2 is more efficent then -1 or /3 than take /2
        // else /3 is more efficnet then take /3 over /2 or -1.
        // Thats why we save it direct int tab[i];
        tab[i] = tab[i - 1] + 1;
        if (i % 2 == 0)
            tab[i] = min(tab[i], tab[i / 2] + 1);
        if (i % 3 == 0)
            tab[i] = min(tab[i], tab[i / 3] + 1);
    }

    return tab[n];
}

void solve()
{
    int n;
    cin >> n;
    countStepsToOne(n);
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
