#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define log(a) cout << (a) << endl;
#define v vector<int>
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define looprev(i, a, b) for (ll i = a - 1; i >= b; i--)

// Here we have to genrate The number of Permuation to pay the toatal amt.
// So the Coins loops are in Inner part and For givern amt we used all the coins and check can we pay the amt or not.

int coinChangeCominations(vector<int> &tab, int amt, vector<int> coins)
{
    tab[0] = 1; // For paying Zero there is One Way.
    for (int i = 1; i < tab.size(); i++)
        for (int j = 0; j < coins.size(); ++j)
            if (coins[j] <= i)
                tab[i] += tab[i - coins[j]];

    return tab[amt];
}

int main()
{
    int n, amt;
    cin >> n;
    v coins(n);
    for (auto &i : coins)
        cin >> i;
    cin >> amt;
    vector<int> tab(amt + 1, 0);
    log(coinChangeCominations(tab, amt, coins));
    return 0;
}
