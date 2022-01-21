#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a;
    double b;
    char c;
    cin >> a >> b >> c;
    cout << setprecision(6) << fixed << endl;
    if ((a >= -1000 && a <= 1000) && (b >= -1000 && b <= 1000 && b != 0))

    {
        if (c == '/')
        {
            cout << a / b << endl;
        }
        if (c == '*')
        {
            cout << a * b << endl;
        }
        if (c == '+')
        {
            cout << a + b << endl;
        }
        if (c == '-')
        {
            cout << a - b << endl;
        }
    }
    return 0;
}