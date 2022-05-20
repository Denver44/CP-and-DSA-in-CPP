
//-------------------------- SEIVE OF ERATOSTHENES -------------------
// to list all the prime numbers
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Limit for n is 10^4 to 5
int main()
{
    ll x;
    cin >> x;

    vector<bool> isthisprime(x + 1, true); // declartion

    for (int i = 2; i <= x; i++)
    {
        if (isthisprime[i])
        {
            for (int j = i * 2; j <= x; j += i) // to go every multiple of i like 2 has 4 ,6 ,8,10 ...  3,6,9,12.....
            {                                   // making its all multiple  false.
                isthisprime[j] = false;
            }
        }
    }
    bool check = isthisprime[x];

    if (check == 1)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not a Prime" << endl;
    }
    return 0;
}