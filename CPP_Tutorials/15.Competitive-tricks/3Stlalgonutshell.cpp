// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> elements;
//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         cin >> a;
//         elements.push_back(a);
//     }

//     vector<int> lhs;
//     vector<int> rhs;

//     for (int a = 0; a < n; a++)
//     {
//         for (int b = 0; b < n; b++)
//         {
//             for (int c = 0; c < n; c++)
//             {
//                 int val = (elements[a] * elements[b]) + elements[c];
//                 lhs.push_back(val);
//             }
//         }
//     }

//     for (int f = 0; f < n; f++)
//     {
//         for (int e = 0; e < n; e++)
//         {
//             for (int d = 0; d < n; d++)
//             {
//                 if (elements[d] == 0)
//                 {
//                     continue;
//                 }

//                 int val = (elements[f] + elements[e]) * elements[d];
//                 rhs.push_back(val);
//             }
//         }
//     }
//     sort(lhs.begin(), lhs.end());
//     sort(rhs.begin(), rhs.end());
//     for (auto i : lhs)
//     {
//         cout << i << endl;
//     }
//     for (auto i : rhs)
//     {
//         cout << i << endl;
//     }

//     long long ans = 0;
//     for (int i = 0; i < lhs.size(); i++)
//     {
//         int li = lower_bound(rhs.begin(), rhs.end(), lhs[i]) - rhs.begin();
//         int ri = upper_bound(rhs.begin(), rhs.end(), lhs[i]) - rhs.begin();
//         ans += (ri - li);
//     }
//     cout << ans << endl;

//     return 0;
// }

// ------------- DETAILED EXPLANATION FOR ABOVE.-----------------------------
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<double> elements;
//     for (int i = 0; i < n; i++)
//     {
//         double a;
//         cin >> a;
//         elements.push_back(a);
//     }

//     vector<double> lhs;
//     vector<double> rhs;

//     for (int a = 0; a < n; a++)
//     {
//         for (int b = 0; b < n; b++)
//         {
//             for (int c = 0; c < n; c++)
//             {
//                 double val = (elements[a] * elements[b]) + elements[c];
//                 lhs.push_back(val);
//                 cout << elements[a] << " " << elements[b] << " " << elements[c] << " value is" << val << endl;
//             }
//         }
//     }

//     cout << endl;
//     for (int f = 0; f < n; f++)
//     {
//         for (int e = 0; e < n; e++)
//         {
//             for (int d = 0; d < n; d++)
//             {
//                 if (elements[d] == 0)
//                 {
//                     continue;
//                 }

//                 double val = (elements[f] + elements[e]) * elements[d];
//                 rhs.push_back(val);
//                 cout << elements[f] << " " << elements[e] << " " << elements[d] << " value is" << val << endl;
//             }
//         }
//     }
//     cout << endl;
//     cout << endl;
//     cout << endl;
//     cout << endl;

//     for (int a = 0; a < n; a++)
//     {
//         for (int b = 0; b < n; b++)
//         {
//             for (int c = 0; c < n; c++)
//             {
//                 for (int d = 0; d < n; d++)
//                 {
//                     for (int e = 0; e < n; e++)
//                     {
//                         for (int f = 0; f < n; f++)
//                         {
//                             if (elements[d] == 0)
//                             {
//                                 continue;
//                             }
//                             double val1 = ((((elements[a] * elements[b]) + elements[c]) / elements[d]) - elements[e]);
//                             if (val1 == elements[f])
//                             {
//                                 cout << elements[a] << " " << elements[b] << " " << elements[c] << " " << elements[d] << " " << elements[e] << " " << elements[f] << " value is" << val1 << endl;
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

// we start at the first town in the path, visit the second, third,… , towns, and arrive at the last town(assume that we travel in a straight line from a town to another).
ld dist(ll x1, ll x2, ll y1, ll y2)
{
    return sqrtl((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
    ll n;
    cin >> n;
    vector<ld> x;
    vector<ld> y;
    for (int i = 0; i < n; i++)
    {
        ld a, b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }
    vector<ll> idx;
    for (ll i = 0; i < n; i++)
    {
        idx.push_back(i);
    }
    int count = 0;
    ld ans = 0.0;
    do
    {
        for (int i = 1; i < n; i++)
        {
            ans += dist(x[idx[i]], x[idx[i - 1]], y[idx[i]], y[idx[i - 1]]);
            cout << x[idx[i]] << " " << x[idx[i - 1]] << " " << y[idx[i]] << " " << y[idx[i - 1]] << endl;
        }
        count++;

    } while (next_permutation(idx.begin(), idx.end()));
    ans = ans / (ld)count;
    cout.precision(9);
    cout << ans << endl;
    return 0;
}