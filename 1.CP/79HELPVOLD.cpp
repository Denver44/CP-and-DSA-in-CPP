#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
//1. Voldemort can travel from a room having energy X to any other room having energy Y such that | X - Y | is minimum
//2. that room hasn't been visited before.
// This is two are used tp make us fool 
// no need of this 
void solve()
{
    int room;
    cin >> room;
    int counter = 0;
    vector<int> v1;
    for (int i = 0; i < room; i++)
    {
        int a;
        cin >> a;
        v1.push_back(a);
    }

    sort(v1.begin(), v1.end());

    int energy = 0;
    for (int i = 0; i < v1.size() - 1; i++)
    {
        energy = energy + v1[i] * v1[i + 1];
    }
    cout << energy;
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