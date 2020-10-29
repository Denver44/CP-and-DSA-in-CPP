#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    int n_people, n_keys, office_location;
    cin >> n_people >> n_keys >> office_location;
    vector<int> people;

    for (int i = 0; i < n_people; i++)
    {
        int a;
        cin >> a;
        people.push_back(a);
    }
    vector<int> keys;
    for (int i = 0; i < n_keys; i++)
    {
        int a;
        cin >> a;
        keys.push_back(a);
    }
    sort(keys.begin(), keys.end());
    sort(people.begin(), people.end());

    int tot_time = INT32_MAX;

    if (n_people == 1)
    {
        for (int i = 0; i < n_keys; i++)
        {
            tot_time = min(tot_time, abs(office_location - keys[i]) + abs(people[0] - keys[i]));
        }
    }
    else
    {
        for (int i = 0; i < n_keys - n_people; i++)
        {
            int mintime = 0;
            for (int j = 0; j < n_people; j++)
            {
                mintime = max(mintime, abs(office_location - keys[i]) + abs(people[j] - keys[i]));
            }

            tot_time = min(tot_time, mintime);
        }
    }
    cout << tot_time << endl;
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

// #include <bits/stdc++.h>

// using namespace std;
// using INT = long long;

// const int NN = 2020;

// INT a[NN], b[NN];

// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("in.in", "r", stdin);
//     freopen("out.out", "w", stdout);
// #endif

//     int n, m, p;
//     cin >> n >> m >> p;
//     for (int i = 1; i <= n; i++)
//         cin >> a[i];
//     for (int i = 1; i <= m; i++)
//         cin >> b[i];
//     sort(a + 1, a + n + 1);
//     sort(b + 1, b + m + 1);

//     INT ans = 1e10;
//     if (n == 1)
//     {
//         for (int i = 1; i <= m; i++)
//         {
//             ans = min(ans, abs(p - b[i]) + abs(a[1] - b[i]));
//         }
//         cout << ans << endl;
//         return 0;
//     }

//     for (int i = 1; i <= m - n + 1; i++)
//     {
//         INT res = 0;
//         for (int j = 1; j <= n; j++)
//         {
//             res = max(res, abs(a[j] - b[i + j - 1]) + abs(b[i + j - 1] - p));
//         }
//         ans = min(ans, res);
//     }
//     cout << ans;

//     return 0;
// }
