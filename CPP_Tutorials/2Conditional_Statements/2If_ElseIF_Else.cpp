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
    else if (age == 18) //[1] we can use as many else if statemnet
    {
        cout << "you just pass the criteria for vote" << endl;
    }
    else //[2] it is optional.
    {
        cout << "you can vote" << endl;
    }
    return 0;
}