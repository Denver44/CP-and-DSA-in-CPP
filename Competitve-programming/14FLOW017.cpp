#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, c;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a > b && a < c)
        {
            cout << a << endl;
        }
        if (a > c && a < b)
        {
            cout << a << endl;
        }
        if (b > a && b < c)
        {
            cout << b << endl;
        }
        if (b > c && b < a)
        {
            cout << b << endl;
        }
        if (c > a && c < b)
        {
            cout << c << endl;
        }
        if (c > b && c < a)
        {
            cout << c << endl;
        }
    }

    return 0;
}