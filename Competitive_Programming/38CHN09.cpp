#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    int a = 0, b = 0;
    while (t--)
    {
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if (a >= b)
        {
            cout << b << endl;
        }
        else
        {
            cout << a << endl;
        }
        a = 0;
        b = 0;
    }
    return 0;
}