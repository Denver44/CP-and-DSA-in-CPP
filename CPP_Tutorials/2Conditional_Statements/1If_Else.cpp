#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter you age please :" << endl;
    cin >> age;

    if (age < 18)
    {
        cout << "you cannot vote" << endl;
    }
    else
    {
        cout << "you can vote" << endl;
    }

    // If there is only line of statement after conditions then no need to write in brackets

    if (age < 18)
        cout << "you cannot vote" << endl;
    else
        cout << "you can vote" << endl;

    // But if the statemnt is more than 2 line write in {}.
    if (age < 18)
    {
        cout << "you cannot vote" << endl;
        cout << "First grow up" << endl;
    }
    else
        cout << "you can vote" << endl;
    return 0;
}