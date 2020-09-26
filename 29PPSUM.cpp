#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int d;
    int n;
    for (int i = 0; i < t; i++)
    {
        cin >> d;
        cin >> n;
        for (int i = 0; i < d; i++)
        {
            int sum = (n) * (n + 1) / 2;
            n = sum;
        }
        cout << n << endl;
    }

    return 0;
}