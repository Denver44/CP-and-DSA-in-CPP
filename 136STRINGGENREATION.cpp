#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int len, k;
    cin >> len >> k;
    string ans = "";
    string helper = "cba"; // this actually help us to make the subtring palindrome than the k.
    for (int i = 0; i < k; i++)
    {
        ans += 'a'; // first we create a palindrome till the lenght of k.
    }
    int x = 0;
    for (int j = k; j < len; j++)
    {
        int k = (x++ % 3);
        ans += helper[k]; // after then using the helper we fill the rest of the string.
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}

// --------------- MY APPROACH ----------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        char a[n];
        a[0] = 'a';
        int j = 1;
        for (j = 1; j <= n - k; j++)
        {
            if (a[j - 1] == 'a')
                a[j] = 'b';
            else if (a[j - 1] == 'b')
                a[j] = 'c';
            else
            {
                a[j] = 'a';
            }
        }
        int run = k - 1;
        while (run--)
        {
            if (a[j - 1] == 'a')
                a[j] = 'a';
            else if (a[j - 1] == 'b')
                a[j] = 'b';
            else
            {
                a[j] = 'c';
            }
            j++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
}
