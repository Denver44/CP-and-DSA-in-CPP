#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    int color;
    cin >> color;
    int counter = 0;
    vector<int> v1;
    for (int i = 0; i < color; i++)
    {
        int a;
        cin >> a;
        v1.push_back(a);
    }
    sort(v1.begin(), v1.end());
   
    
    for (int i = 0; i < color - 1; i++)
    {
        if (v1[i] == v1[i + 1])
        {
            counter++;
        }
    }
    cout << counter << endl;
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