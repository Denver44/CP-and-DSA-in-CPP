#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main()
{
    string s;
    int t;
    cin >> t;
    while (t--)
    {
        int len;
        cin >> len;
        cin >> s;

        if (len % 2 == 0)
        {

            for (int i = 0; i < len; i = i + 2)
            {

                char swap = s[i + 1];

                s[i + 1] = s[i];

                s[i] = swap;
            }
        }
        else
        {

            for (int i = 0; i < len - 1; i = i + 2)
            {
                char swap = s[i + 1];

                s[i + 1] = s[i];

                s[i] = swap;
            }
        }
        for (int i = 0; i < len; i++)
        {

            if (s[i] >= 97 && s[i] <= 109)
            {
                int temp = s[i] - 97;
                s[i] = char(122 - temp);
            }
            else
            {
                int temp = s[i] - 97;
                s[i] = char(122 - temp);
            }
        }
        cout << s<<endl;
    }
    return 0;
}
