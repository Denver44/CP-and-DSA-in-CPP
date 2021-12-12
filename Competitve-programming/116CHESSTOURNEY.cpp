#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Simple Question we have to separte the paleyer sin 2 teams
// In which A team player must have higher rating then B team.
// If they have same rating also then or less than they cant win.

void solve()
{
    int n;
    cin >> n;
    int size = (2 * n);
    vector<int> arr;
    while (size--)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.rbegin(), arr.rend());

    for (int i = 0; i < arr.size() / 2; i++)
    {
        if (arr[i] <= arr[arr.size() - 1 - i])
        {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
