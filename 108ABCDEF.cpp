#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> elements;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        elements.push_back(a);
    }

    vector<int> lhs;
    vector<int> rhs;

    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            for (int c = 0; c < n; c++)
            {
                int val = (elements[a] * elements[b]) + elements[c];
                lhs.push_back(val);
            }
        }
    }

    for (int f = 0; f < n; f++)
    {
        for (int e = 0; e < n; e++)
        {
            for (int d = 0; d < n; d++)
            {
                if (elements[d] == 0)
                {
                    continue;
                }

                int val = (elements[f] + elements[e]) * elements[d];
                rhs.push_back(val);
            }
        }
    }
    sort(lhs.begin(), lhs.end());
    sort(rhs.begin(), rhs.end());

    long long ans = 0;
    for (int i = 0; i < rhs.size(); i++)
    {
        int li = lower_bound(lhs.begin(), lhs.end(), rhs[i]) - lhs.begin();
        int ri = upper_bound(lhs.begin(), lhs.end(), rhs[i]) - lhs.begin();
        ans += (ri - li);
    }

    cout << ans << endl;

    return 0;
}
