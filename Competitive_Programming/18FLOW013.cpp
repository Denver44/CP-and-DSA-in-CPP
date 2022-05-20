#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int sum = 180;
    int a;
    int b;
    int c;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if (a + b + c == sum)
        {
            cout << "YES"<<endl;
        }

        else
        {
            cout << "NO"<<endl;
        }
    }
    return 0;
}