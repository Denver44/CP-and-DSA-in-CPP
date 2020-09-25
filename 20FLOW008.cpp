#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int a;

    for (int i = 0; i < t; i++)
    {
        cin >> a;
        if (a < 10)
        {
            cout << "What an obedient servant you are!" << endl;
        }

        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}