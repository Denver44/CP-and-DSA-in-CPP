#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
// Simply if we roate the array by 1. we get the special Permuations.
// so for roaotion we do reverse from begin to start+k  k is the number of roatate we want here k is 1.
// then next after the arr+k to  till arr.end().
// and after then whole reverse we get the roate bye k.
void solve()
{
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        arr.push_back(i + 1);
    }
    int rotate = 1;
    int upto = (n - 1);
    reverse(arr.begin(), arr.begin() + 1);
    reverse(arr.begin() + 1, arr.end());
    reverse(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
