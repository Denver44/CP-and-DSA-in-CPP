#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c))
        {
            cout << "\nYES" << endl;
        }
        else
        {
            cout << "\nNO" << endl;
        }
    }

    return 0;
}