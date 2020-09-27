#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    int count = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        int j = s.length();
        for (int i = 0; i < j - 1; i++)
        {

            if (s[i] == 'C')
            {

                if (s[i + 1] == 'E' || s[i + 1] == 'S' || s[i + 1] == 'C')
                    count++;
            }
            else if (s[i] == 'E')
            {

                if (s[i + 1] == 'E' || s[i + 1] == 'S')
                {
                    count++;
                }
            }
            else if (s[i] == 'S')
            {

                if (s[i + 1] == 'S')
                {
                    count++;
                }
            }
        }
        if (count == j - 1)
        {
            cout << "yes" << endl;
        }
        else
        {

            cout << "no" << endl;
        }
        count = 0;
    }

    return 0;
}