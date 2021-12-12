#include <bits/stdc++.h>
using namespace std;

int main()
{
    const unsigned int M = 1000000007;
    string s;
    while (cin >> s)
    {
        if (s[0] == '0')
            continue;

        int len = s.size();
        vector<int> tab(len, 0);
        tab[0] = 1;
        for (int i = 1; i < len; i++)
        {
            if (s[i] == '0' && s[i - 1] == '0')
            {
                tab[i] = 0; // IF BOTH ARE 00 that means answer is 0
            }
            else if (s[i] == '0' && (s[i - 1] == '1' || s[i - 1] == '2'))
            {
                tab[i] = ((i >= 2) ? (tab[i - 2] % M) : 1 % M); // 10 and 20
            }
            else if (s[i] >= '1' && s[i] <= '9' && (s[i - 1] == '0'))
            {
                tab[i] = (tab[i - 1] % M); // 01 ...09 then simply your answer will be i-1.
            }
            else if (s[i] != '0' && s[i - 1] != '0')
            {
                string x = s.substr(i - 1, 2);
                if (stoi(x) >= 11 && stoi(x) <= 26) // less than 26
                {
                    tab[i] = ((i >= 2) ? ((tab[i - 1] + tab[i - 2]) % M) : (tab[i - 1] + 1) % M);
                }
                else // if its graeter than 56 than simply whatevr your answer will get aatch behind you . thats why tab[i-1].
                {
                    tab[i] = tab[i - 1] % M;
                }
            }
        }
        cout << tab[len - 1] << endl;
    }

    return 0;
}
