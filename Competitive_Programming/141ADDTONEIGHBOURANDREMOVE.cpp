#include <bits/stdc++.h>
using namespace std;
#define ll long long
// If the Number ares already same to neigbhours so for that condition we started from n otherwise we started from n-1.
// The reason for 1 is that at least we no that answer will be n-1 it cannot be n.
// here we find out the k here
// Lets assume we found that k.
// Then the k must divide the sum Perfectly first hurdle to cross.
// Second hurdle we take out sum from 0 to n element if cursum + needsum == 0 then we make cursum =0.
// If its get greater than it it means this k is not possible.
// if the flag is true after passing all the hurdle we get the answer by subtracting it by n-1.

void solve()
{
    int n, sum = 0;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr)
    {
        cin >> x;
        sum += x;
    }
    for (int i = n; i >= 1; i--)
    {
        if (sum % i == 0)
        {
            int cursum = 0, needsum = (sum / i), j = 0;
            bool flag = true;
            while (j < n)
            {
                cursum += arr[j++];
                if (cursum > needsum)
                {
                    flag = false;
                    break;
                }
                else if (cursum == needsum)
                    cursum = 0;
            }
            if (flag)
            {
                cout << n - i << endl; // as at least the answer will be n-1 will be there.
                return;
            }
        }
    }
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
