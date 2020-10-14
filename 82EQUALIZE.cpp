#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    long len;
    cin >> len;
    string a, b;
    cin >> a >> b;
    long count = 0;
    for (int i = 0; i < len; i++)
    {
        if (i == len - 1 && a[i] != b[i])
        {
            // This is for the last as we further theris no string so wecannot check for a+1 or b+1

            count++;
        }

        else if (a[i] != b[i])
        {
            if (a[i + 1] != a[i] && a[i + 1] && b[i + 1])
            {
                //  this when a-> 1 0  or 0 1
                //  this when b-> 0 1  or 1 0
                count++;
                i++;
            }
            else
            { //this when a-> 0 or 1
                //this when b-> 1 or 0
                count++;
            }
        }
        cout << count << endl;
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