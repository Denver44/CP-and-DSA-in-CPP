#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
bool isPermutation(char a[], char b[])
{

    int charcter[26] = {0};
    int n = strlen(a); // never use this kind of fucntion in loop it called everytime and so ther is high percentage of getting TLE.
    if (strlen(a) != strlen(b))
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            int x = a[i] - 97;
            int y = b[i] - 97;
            charcter[x]++;
            charcter[y]--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (charcter[i])
            {
                return 0;
            }
        }
        return 1;
    }
}
void solve()
{
    char a[1000000];
    char b[1000000];
    cin >> a >> b;

    int charcter[26] = {0};

    if (strlen(a) != strlen(b))
    {
        cout << "false";
        return;
    }
    else
    {
        for (int i = 0; i < strlen(a); i++)
        {
            int x = a[i] - 97;
            int y = b[i] - 97;
            charcter[x]++;
            charcter[y]++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (charcter[i] % 2 != 0)
            {
                cout << "false";
                return;
            }
        }
        cout << "true";
    }
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