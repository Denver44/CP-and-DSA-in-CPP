#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// simple first we should check for the increasing number and keep the count of the that number
// then we shluld check the for decrasing start from end to incrsing idx and keep count of dec idx.
//  after than  for the same value. inc idx to dec idx

void solve()
{

    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    bool flag = true;
    int idx1 = 0;
    int idx2 = n - 1;
    for (int i = 0; i < n - 1; i++) // go and check for increasing order.
    {
        if (arr[i + 1] > arr[i])
        {
            idx1++;
        }
        else
        {
            break;
        }
    }
    for (int i = n - 1; i > idx1; i--) // go and check for decreasing order.
    {
        if (arr[i] < arr[i - 1])
        {
            idx2--;
        }
        else
        {
            break;
        }
    }
    for (int i = idx1; i < idx2; i++) // go and check for same
    {
        if (arr[i] != arr[i + 1])
        {
            flag = false;
            break;
        }
    }

    if (flag)
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
    cout << fixed;
    cout << setprecision(10);
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
