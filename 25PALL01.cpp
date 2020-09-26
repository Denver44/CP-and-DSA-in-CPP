#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int num;
    int n;
    int sum = 0;
    int rem;

    while (t--)
    {
        cin >> num;
        n = num;
        while (n != 0)
        {
            rem = n % 10;
            sum = sum * 10 + rem;
            n = n / 10;
            rem = 0;
        }
        if (num == sum)
        {
            cout << "wins" << endl;
        }
        else
        {
            cout << "losses" << endl;
        }
        sum = 0;
    }

    return 0;
}
