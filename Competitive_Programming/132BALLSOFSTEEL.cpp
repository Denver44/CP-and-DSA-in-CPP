#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Easiest Question
// Here the distance between two points formula was given  |xi−xj|+|yi−yj|≤k  if this condition satsisifies for just one point so by energzing that ball we can attarct all other to the=at place and s o oprtaion was only 1.
// Here the nas can be -1 or 1,
// if a attracts c  b attarcts c and c can attarct a and b also so by supplying charge to c w ecan merege all ball in one points.
// but if in case we charge a then it atttarct c only so nevwe forver a b and c can be on one point so answer will be -1.

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> arr(n);
    for (auto &i : arr)
    {
        cin >> i.first >> i.second;
    }
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int maxd = 0;
        for (int j = 0; j < n; j++)
        {
            maxd = max(maxd, abs(arr[i].second - arr[j].second) + abs(arr[i].first - arr[j].first));
        }
        if (maxd <= k) // as soon as we get that one point where all the points have the same distnace we return 1.
        {
            cout << 1 << endl;
            return;
        }
    }
    cout << -1 << endl; // if not point is there then it will be -1 at the end.
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
