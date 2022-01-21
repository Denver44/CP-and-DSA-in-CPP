#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int sum;
    int amt;
    for (int i = 0; i < t; i++)
    {
        cin >> amt;
        int hun = amt / 100;
        amt = amt % 100;
        int fifty = amt / 50;
        amt = amt % 50;
        int ten = amt / 10;
        amt = amt % 10;
        int five = amt / 5;
        amt = amt % 5;
        int two = amt / 2;
        amt = amt % 2;
        int one = amt / 1;
        amt = amt % 1;

        int sum = hun + fifty + ten + five + two + one;
        cout << sum << endl;
    }

    return 0;
}