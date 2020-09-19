#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int tot = 0;
    while (n--)
    {
        long long int t;
        cin >> t;
        if (t % k == 0)
        {
            tot++;
        }
    }
    cout << tot;
    return 0;
}