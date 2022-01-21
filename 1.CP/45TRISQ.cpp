#include <iostream>
using namespace std;

int main()
{
    int no;
    int t;
    cin >> t;
    while (t--)
    {
        int b;
        cin >> b;

        if (b == 1 || b == 2 || b == 3)
        {
            cout << "0" << endl;
        }
        else if (b % 2 == 0)
        {
            int area = 0.5 * b * b;
            no = ((area - b) / 4);
            cout << no << endl;
        }
        else
        {
            b = b - 1;
            int area = 0.5 * b * b;
            no = ((area - b) / 4);
            cout << no << endl;
        }
    }
    return 0;
}