#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[28];
    char w[16];
    int t;
    cin >> s;
    cin >> t;
    while (t--)
    {
        bool found[104] = {false};
        cin >> w;
        if (strlen(w) == strspn(w, s))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}