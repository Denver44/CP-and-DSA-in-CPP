#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    int count = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        if (n % 10 == 0)
        {
            cout << "0" << endl;
        }
        else if (n % 10 == 5)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}