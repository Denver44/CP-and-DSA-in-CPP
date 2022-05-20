#include <iostream>
using namespace std;

// this the example of default arguments always the value which u have assigned in the function kept it on right side and also u can change the value of deafult argument by the calling function itself only.
float moneyReceived(int currentMoney, float factor = 1.04)
{
    cout << "factor is " << factor << endl;
    return currentMoney * factor;
}

int main()
{
    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money) << "Rs after 1 year" << endl;
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money, 1.1) << " Rs after 1 year";
    return 0;
}
