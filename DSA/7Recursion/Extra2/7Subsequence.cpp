#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

vector<string> getSubsequence(string s)
{
    if (s.empty())
    {
        vector<string> temp;
        temp.push_back("");
        return temp;
    }

    char firstchar = s[0];
    vector<string> temp1;
    temp1 = getSubsequence(s.substr(1));
    vector<string> temp2;
    for (int i = 0; i < temp1.size(); i++)
    {
        temp2.push_back(temp1[i]); // I dint Come
    }
    for (int i = 0; i < temp1.size(); i++)
    {
        temp2.push_back(firstchar + temp1[i]); // I will come
    }
    return temp2;
}

void solve()
{
    vector<string> output = getSubsequence("abc");
    for (auto e : output)
        cout << e << endl;
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