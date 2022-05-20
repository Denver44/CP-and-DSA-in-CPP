#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a;
    cin >> a;
    vector<int> primeFactors;
    // i *i or sqrt(a)  same time no chnage in answer.
    int step = 0;
    int step2 = 0;
    for (int i = 2; i <= sqrt(a); i++)
    {
        step2++;
        while (a % i == 0)
        {
            primeFactors.push_back(i);
            a /= i;
            step++;
        }
    }
    if (a > 1)
    {

        primeFactors.push_back(a);
        a = 1;
    }
    for (auto i : primeFactors)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << step << " " << step2 << endl;

    return 0;
}
