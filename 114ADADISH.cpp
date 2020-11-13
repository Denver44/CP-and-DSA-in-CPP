#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    while (n--)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    if (arr.size() == 1)
    {
        cout << arr[0] << endl;
        return;
    }
    else if (arr.size() == 2)
    {
        cout << max(arr[0], arr[1]) << endl;
        return;
    }
    else
    {
        sort(arr.rbegin(), arr.rend());
        int sum = 0;
        int a = 0, b = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (a < b)
            {
                a += arr[i];
            }
            else
            {
                b += arr[i];
            }
        }
        cout << max(a, b) << endl;

        return;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
