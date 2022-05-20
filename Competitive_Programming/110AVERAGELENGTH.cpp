#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

ld dist(int x1, int x2, int y1, int y2)
{
    return sqrtl((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
void solve()
{
    int n;
    cin >> n;
    vector<int> x;
    vector<int> y;
    vector<int> idx;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }
    for (int i = 0; i < n; i++)
    {
        idx.push_back(i);
    }
    ld ans = 0.0;
    int count = 0;
    do
    {
        for (int i = 1; i < n; i++)
        {
            ans += dist(x[idx[i]], x[idx[i - 1]], y[idx[i]], y[idx[i - 1]]);

            // as we will go linear from a to b then b to c
            // thats  why we take loop from 1 to n
            //  means 0 to 1 then 1 to 2 so we get the distnace
        }
        count++;

    } while (next_permutation(idx.begin(), idx.end()));
    ans = ans / (ld)count;
    cout.precision(9);
    cout << ans << endl;
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
