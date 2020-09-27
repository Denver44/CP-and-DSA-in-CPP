#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x;
        cin >> x;
        long long int res = log2((long double)x);

        if (res == 0)
        {
            cout << "0" << endl;
        }
        else if (res == 1)
        {
            cout << "1" << endl;
        }
        else
        {

            int a = res % 4;
            if (a == 2)
            {
                cout << "2" << endl;
            }
            else if (a == 3)
            {
                cout << "3" << endl;
            }
            else if (a == 0)
            {
                cout << '0' << endl;
            }
            else if (a == 1)
            {
                cout << "9" << endl;
            }
        }
    }

    return 0;
}