#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define log(a) cout << (a) << endl;
#define v vector<int>
#define loop(i, a, b) for (int i = a; i < b; i++)
#define looprev(i, a, b) for (int i = a - 1; i >= b; i--)
char Character[27] = {'_', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

void helper(string s1, string *output, int &i, string psf)
{
    if (s1.empty())
    {
        output[i++] = psf;
        return;
    }

    helper(s1.substr(1), output, i, psf + Character[s1[0] - 48]);
    if (s1.size() >= 2)
    {
        string s = s1.substr(0, 2);
        if (s[0] != '0' && s[0] <= '2' && (s[1] != '7' || s[1] != '8' || s[1] != '9'))
        {
            helper(s1.substr(2), output, i, psf + Character[stoi(s)]);
        }
    }
}

int getCodes(string input, string output[10000])
{
    int i = 0;
    helper(input, output, i, "");
    return i;
}

int main()
{
    return 0;
}