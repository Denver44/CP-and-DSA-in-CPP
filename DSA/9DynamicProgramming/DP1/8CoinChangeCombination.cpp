#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define log(a) cout << (a) << endl;
#define v vector<int>
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define looprev(i, a, b) for (ll i = a - 1; i >= b; i--)

// Here we Have to genrate Unique Comibination to Payour amt by using the coins.
// So to genrate a Unique amt we iterate the coins aray In outer loop and amt in inner loop so No permuattions will be eneated

int coinChangePermuations(vector<int> &tab, int amt, vector<int> coins)
{
    tab[0] = 1;
    for (int i = 0; i < coins.size(); i++) // Every time we use the coins for itertaion thats why no permuation will be genrated
        for (int j = coins[i]; j < tab.size(); ++j)
            if ((j - coins[i] >= 0) && tab[j - coins[i]] != 0)
                tab[j] += tab[j - coins[i]];

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
    log(coinChangePermuations(tab, amt, coins));
    return 0;
}
