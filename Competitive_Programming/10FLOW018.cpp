#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        unsigned int fact = 1;

        while (n != 1)
        {

            fact = fact * n;
            n--;
        }
        cout << fact << endl;
        fact = 0;
    }
    return 0;
}