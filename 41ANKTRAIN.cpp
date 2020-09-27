#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int num;
    while (t--)
    {
        cin >> num;
        if (num % 8 == 0)
        {
            cout << (num - 1) << "SL" << endl;
        }
        if (num % 8 == 1)
        {
            cout << (num + 3) << "LB" << endl;
        }
        if (num % 8 == 2)
        {
            cout << (num + 3) << "MB" << endl;
        }
        if (num % 8 == 3)
        {
            cout << (num +3) << "UB" << endl;
        }
        if (num % 8 == 4)
        {
            cout << (num - 3) << "LB" << endl;
        }
        if (num % 8 == 5)
        {
            cout << (num - 3) << "MB" << endl;
        }
        if (num % 8 == 6)
        {
            cout << (num - 3) << "UB" << endl;
        }
        if (num % 8 == 7)
        {
            cout << (num + 1) << "SU" << endl;
        }
    }

    return 0;
}