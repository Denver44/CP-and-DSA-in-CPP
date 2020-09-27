#include <iostream>
using namespace std;
//*******************************  BACKTARCKING **********************************//
int main()
{
    int n;
    int red = 0.5;
    int blue = 1;
    int m;
    cin >> n >> m;
    int k = 0;

    while (n != m)
    {

        if (m > n)
        {
            if (m % 2 == 0)
            {
                k++;
                m = m / 2;
            }
            else if (m % 2 != 0)
            {
                k++;
                m = m + blue;
            }
        }
        else if (m < n)
        {
            k++;
            m = m + blue;
        }
    }
    cout << k << endl;

    return 0;
}

