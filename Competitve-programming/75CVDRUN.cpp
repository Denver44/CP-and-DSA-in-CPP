#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    int arr[n] = {0};
    int flag =0;
    while (1)
    {
        if (arr[x])
        {
            break;
        }
        arr[x]++;
        x = (x + k) % n;
        if(arr[y])
        {
            flag=1;
            break;
        }
    }
   

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}