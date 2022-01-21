#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Simple Problem
// as if a->b->c->a so arr[arr[arr[i]]] == i) so if we call this way we get the i get back then yes there is lover traingle.

void solve()
{
    int n;

    cin >> n;
    vector<int> arr(n);
    int i = 1;
    while (n--)
    {
        int a;
        cin >> a;
        arr[i] = a;
        i++;
    }
    for (int i = 1; i <= arr.size(); i++)
    {
        if (arr[arr[arr[i]]] == i)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
