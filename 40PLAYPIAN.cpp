#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    char s[101];
    while (t--)
    {
        cin >> s;
        for (int i = 0; i < 101; i++)
        {
            if (i % 2 == 0)
            {

                if (s[i] == s[i + 1])
                {

                    cout << "no" << endl;
                    break;
                }
            }
            if (i == strlen(s) - 1)
            {
                cout << "yes" << endl;
                break;
            }
        }
    }
    return 0;
}