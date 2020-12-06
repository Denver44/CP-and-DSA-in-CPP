#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double n, d;
    cin >> n >> d;
    int risk = 0, notRisk = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a >= 80 || a <= 9)
            risk++;
        else
            notRisk++;
    }
    if (d == 1)
    {
        cout << n << endl;
        return;
    }
    else
    {
        double days = ceil(risk / d) + ceil(notRisk / d);
        cout << days << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}