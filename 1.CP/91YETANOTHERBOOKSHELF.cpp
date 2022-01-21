#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
//  Using stack Data structure we calculated the number of moves we have to make the 0 book on one side and 1 book on one side.
//  if we got first time 1 we will push it on to our stacks
//  after than we will keep counting the numbers of zeros we are getting
//  as we got another one we will adde the tot count to our final count.
void solve()
{
    int len;
    cin >> len;
    vector<int> arr;
    for (int i = 0; i < len; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    stack<int> s1;
    int tot = 0;
    int count = 0;
    int i = 0;
    while (i < len)
    {
        if (arr[i] == 1 && s1.empty())
        {
            s1.push(arr[i]);
        }
        else if (!s1.empty() && arr[i] == 0)
        {
            count++;
        }
        else if (arr[i] == 1 && s1.top() == 1)
        {
            tot += count;
            count = 0;
            s1.pop();
            s1.push(arr[i]);
        }

        i++;
    }
    cout << tot << endl;
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