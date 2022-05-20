#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m = 0;
        cin >> n >> k;
        for (int j = 2; j <= k; j++)
        {
            if (m < n % j)
            {
                m = n % j;
            }
        }
        cout << m << endl;
    }

    return 0;
}
