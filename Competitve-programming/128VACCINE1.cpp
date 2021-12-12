#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double d1, v1, d2, v2, p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    double tot = 0;
    double days = 0;
    if ((d1 == 1 && d2 == 1) && (p <= v1 || p <= v2))
    {
        cout << 1 << endl;
        return;
    }
    if (d1 == d2)
    {
        days = ceil(p / (v1 + v2));
        cout << days << endl;
        return;
    }
    if (d1 < d2 || d2 < d1)
    {
        if (1 - d1 > 1 - d2)
        {
            days += abs(1 - d1);
            double count = (abs(d1 - d2) * v1);
            if (p < count)
            {
                days += ceil(p / (v1));
                cout << days << endl;
                return;
            }
            double left = p - count;
            days += abs(d1 - d2);
            days += ceil(left / (v1 + v2));
            cout << days << endl;
            return;
        }
        else
        {
            days += abs(1 - d2);
            double count = (abs(d2 - d1) * v2);
            if (p < count)
            {
                days += ceil(p / (v2));
                cout << days << endl;
                return;
            }
            double left = p - count;
            days += abs(d2 - d1);
            days += ceil(left / (v1 + v2));
            cout << days << endl;
            return;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}