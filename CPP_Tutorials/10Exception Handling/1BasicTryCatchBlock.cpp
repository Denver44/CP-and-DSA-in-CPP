#include <iostream>
using namespace std;
/*
 Writing our code in try catch block will help ensure that whole program don't get crash because of one wrong input .
*/
int main()
{
    int a, b, c;
    cout << "Enter numerator and denominator" << endl;
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw b; // u have to throw that exception

        c = a / b;
    }
    catch (int e) // later catch that error in any variable.
    {
        cout << "Denominator cannot be  " << e << endl;
        return 0; // as it will return and the code below it never be executed.
    }

    cout << "Num / Den : " << c << endl;
    return 0;
}
