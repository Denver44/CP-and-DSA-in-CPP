#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(12) << endl;
    int t;
    int drinks;
    vector<int> v1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> drinks;
        v1.push_back(drinks);
    }
    double tot = 0;
    for (int i = 0; i < t; i++)
    {

        tot = tot + v1[i];
    }
    double res;
    res = tot / t;
    cout << res;

    return 0;
}
