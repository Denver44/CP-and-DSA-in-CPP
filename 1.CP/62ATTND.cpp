#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string f[n];
        string l[n];
        for (int i = 0; i < n; i++)
        {
            cin >> f[i] >> l[i];
        }

        int a[n] = {0};
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (f[i] == f[j])
                {
                    a[i]++;
                    a[j]++;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cout << f[i] << endl;
            }
            else
            {
                cout << f[i] + " " << l[i] << endl;
            }
        }
    }
    return 0;
}