#include <iostream>
#include <exception>
#include <string>
using namespace std;

int main()
{
    double num, den, res = 0;
    cout << "Enter numerator and denominator : " << endl;
    cin >> num >> den;
    try
    {
        if (den == 0)
        {
            throw den; // u have to throw that exception
        }
        res = num / den;

        string str1 = "YANKEE ";
        string str2 = "DADDY";
        str1.append(str2, 7, 3);
        cout << str1 << endl;
    }
    catch (logic_error &le)
    {
        cout << le.what();
    }
    catch (double ex) // later catch that error in any variable.
    {
        cout << "Denominator cannot be zero" << endl;
        return 0;
    }
    cout << endl;
    cout << res << endl;

    return 0;
}