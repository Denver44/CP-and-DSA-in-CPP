#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int hard;
    float cc;
    int ten;

    for (int i = 0; i < t; i++)
    {
        cin >> hard >> cc >> ten;
        if (hard > 50 && cc < 0.7 && ten > 5600)
        {
            cout << 10<<endl;
        }
        else if (hard > 50 && cc < 0.7)
        {
            cout << 9<<endl;
        }
        else if (ten > 5600 && cc < 0.7)
        {
            cout << 8<<endl;
        }
        else if (ten > 5600 && hard > 50)
        {
            cout << 7<<endl;
        }
        else if (hard > 50 || cc < 0.7 || ten > 5600)
        {
            cout << 6<<endl;
        }
        else
        {
            cout << 5<<endl;
        }
    }

    return 0;
}