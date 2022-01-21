#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int solve()
{
    string username;
    cin >> username;

    for (int i = 0; i < username.size() - 1; i++)
    {
        if (i <= username.size() - 2)
        {
            if (username.substr(i, 2) == "ch" || username.substr(i, 2) == "he" || username.substr(i, 2) == "ef")
            {
                cout << "Answer:-  " << username.substr(i, 2) << endl;
                return 1;
            }
        }
        if (i <= username.size() - 3)
        {
            if (username.substr(i, 3) == "che" || username.substr(i, 3) == "hef")
            {
                cout << "Answer:-  " << username.substr(i, 3) << endl;
                return 1;
            }
        }
        if (i <= username.size() - 4)
        {
            if (username.substr(i, 4) == "chef")
            {
                cout << "Answer:-  " << username.substr(i, 4) << endl;
                return 1;
            }
        }
    }

    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    int t = 1;
    cin >> t;
    int count = 0;
    for (int i = 0; i < t; i++)
    {

        count += solve();
    }
    cout << count << endl;

    return 0;
}