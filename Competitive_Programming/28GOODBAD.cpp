#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    int k;
    string s;
    for (int i = 0; i < t; i++)
    {
        int small = 0;
        int caps = 0;
        cin >> n;
        cin >> k;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            int p = (int)s[i];
            if (p >= 65 && p <= 90)
            {
                caps++;
            }
            else
            {
                small++;
            }
        }

        if (small == caps)
        {
            if (k >= caps || k >= small)
            {
                cout << "both" << endl;
            }
            else if (k < caps || k < small)
            {
                cout << "none" << endl;
            }
        }
        else if (small > caps)
        {
            if (k >= small)
            {
                cout << "both" << endl;
            }
            else if (k < caps)
            {
                cout << "none" << endl;
            }
            else
            {
                cout << "chef" << endl;
            }
        }
        else if (caps > small)
        {
            if (k >= caps)
            {
                cout << "both" << endl;
            }
            else if (k < small)
            {
                cout << "none" << endl;
            }
            else
            {
                cout << "brother" << endl;
            }
        }
        // small = 0;
        // caps = 0;
    }
    return 0;
}
