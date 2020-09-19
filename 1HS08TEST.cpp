#include <iostream>

using namespace std;

int main()
{
    int amount;
    double bank_balance;
    cin >> amount;
    cin >> bank_balance;
    double rem_balance = 0; // This is the actuall result which we have to print.
    // As per transctaion 0.5 dollar

    if (amount % 5 == 0)
    {
        if ((amount < bank_balance) && ((amount + 0.5) <= bank_balance))
        {
            rem_balance = bank_balance - amount - 0.5;
            cout << rem_balance;
        }
        else
        {
            cout << bank_balance;
        }
    }

    else
    {
        cout << bank_balance;
    }

    return 0;
}