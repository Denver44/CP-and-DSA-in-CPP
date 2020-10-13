#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// ---------------------------------------------------  MEDIAN -------------------------------------------
// Median is point from its right side all element will be greater than him
// Median is the point from its left side all the element all the elemnt will be less.

void solve()
{
    long long int size;
    long long int median;
    cin >> size >> median;
    vector<long long int> v1;
    for (long long int i = 0; i < size; i++)
    {
        long long int a;
        cin >> a;
        v1.push_back(a);
    }
    sort(v1.begin(), v1.end());
    long long middle = v1[size / 2];
    long long count = middle - median;
    count = abs(count);
    long long mid = (v1.size() / 2);
    for (long long i = 0; i <= mid - 1; i++)
    {
        if (v1[i] > median)
        {
            count = abs(count) + abs(v1[i] - median);
            // cout<<"1 "<<count<<endl;
        }
    }
    //  if (count < 0)
    // {
    //     count *= -1;
    // }
    for (long long i = mid + 1; i < v1.size(); i++)
    {
        if (v1[i] < median)
        {
            count = abs(count) + abs(median - v1[i]);
        }
        // cout <<"2 "<<count<<endl;
    }

    // if (count < 0)
    // {
    //     count *= -1;
    // }

    cout << abs(count) << endl;
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