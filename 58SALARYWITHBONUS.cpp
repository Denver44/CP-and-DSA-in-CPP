#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const int tax = 15;
int main()
{
    string name;
    cin >> name;
    double salary;
    double totalslae;
    cin >> salary >> totalslae;

    double res;
    cout << setprecision(2) << fixed;
    res = salary + (totalslae * tax / 100);

    cout << "TOTAL = R$ " << res << endl;

    return 0;
}