#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    // fflush(stdin);
    while (t--)
    {
        string s1, s2;
        int a[26] = {0};
        int b[26] = {0};
        int count = 0;

        cin >> s1 >> s2;
        int k = s1.length();
        for (int i = 0; i < k; i++)
        {
            int x = s1[i] - 97;
            a[x]++;
            int y = s2[i] - 97;
            b[y]++;
        }

        for (int j = 0; j < 26; j++)
        {
            if (a[j] != b[j])
            {
                count++;
            }
        }

        if (count == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}