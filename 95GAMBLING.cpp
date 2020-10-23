#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
//  here untill  both list doesnt get empty we have to play.
void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    ll asum = 0;
    ll bsum = 0;
    int moves = 0;
    int i = 0;
    int j = 0;
    int player = 0;
    while (moves < 2 * n)
    {
        moves++;

        if (!player)
        {
            if (a[i] >= b[j])
            {
                asum += a[i];
                i++;
            }
            else
            {
                j++;
            }
        }
        else
        {
            if (b[j] >= a[i])
            {
                bsum += b[j];
                j++;
            }
            else
            {
                i++;
            }
        }
        player ^= 1;
    }

    cout << asum - bsum << endl;
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

// 6
// 376259 910770 887448 703054 67926 981667
// 695184 641139 364840 276118 318577 222469