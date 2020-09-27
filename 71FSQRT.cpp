#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int res;
    int n;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        res = sqrt(n);
        cout << res << endl;
    }

    return 0;
}