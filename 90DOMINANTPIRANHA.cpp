#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// it was simple if all the values are same we have to just return -1
// so for same value we have make a lopp which return a flag = true thats means all value are true.
// then we have taken out the max value as only max value can be a pirahana because a value greater than its adjacnet that fish cab can eat ist adjacnets
// so we hade make a loop wich will going to find for us.
// there can be many answer for this
// but we have to return only one index.
void solve()
{
    int len;
    cin >> len;
    vector<int> arr;
    for (int i = 0; i < len; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    bool flag = true;
    for (int i = 1; i < len; i++)
    {
        if (arr[i] != arr[0])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << -1 << endl;
        return;
    }

    int maxi = *max_element(arr.begin(), arr.end());

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == maxi)
        {
            if (i - 1 >= 0 && arr[i - 1] < arr[i])
            {
                cout << i + 1 << endl;
                break;
            }
            else if (i + 1 < len && arr[i + 1] < arr[i])
            {
                cout << i + 1 << endl;
                break;
            }
        }
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
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}