#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void helper(string s, int k, vector<string> &vs, string psf)
{
    if (k == 0)
    {
        vs.push_back(psf);
        return;
    }
    for (int j = 0; j < s.size(); ++j)
    {
        helper(s, k - 1, vs, psf + s[j]);
    }
}
int allStrings(char input[], int k, char output[][100])
{

    string s = input;
    vector<string> vs;

    for (int i = 0; i < s.size(); ++i)
    {
        string s1 = "";
        s1 += s[i];
        helper(s, k - 1, vs, s1);
    }

    for (int i = 0; i < vs.size(); i++)
    {
        for (int j = 0; j < vs[i].size(); j++)
        {
            output[i][j] = vs[i][j];
        }
    }
    return vs.size();
}

void solve()
{

    char a[100];
    char b[1000][100];
    cin >> a;
    int k;
    cin >> k;
    int size = allStrings(a, k, b);
    for (int i = 0; i < size; i++)
    {
        cout << b[i] << endl;
    }
}

int main()
{

    solve();
    return 0;
}
