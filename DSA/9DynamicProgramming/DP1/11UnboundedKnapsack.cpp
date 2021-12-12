#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define log(a) cout << (a) << endl;
#define v vector<int>
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define looprev(i, a, b) for (ll i = a - 1; i >= b; i--)
// Include exclude Group.

// The difference of Unbounded is that we can use same element to fill our bags so duplcates allowed.
// Bounded Duplicates are not allowed.
// So using 1Darray and for a particular capacity we try to put all the wights we can find it out.
// Coinchange Comination and CoinCHnage Permautuon both are Unbounded Knapsnack.
int unboundedKnapsack(vector<int> &weights, vector<int> &values, int capacity, int n)
{

    vector<int> tab(capacity + 1, 0);
    tab[0] = 0;

    for (int i = 1; i < tab.size(); i++) // capacity of bag
    {
        for (int j = 0; j < weights.size(); ++j)
        {
            if (i >= weights[j])
                tab[i] = max(tab[i], values[j] + tab[i - weights[j]]);
        }
    }

    return tab[capacity];
}

void solve()
{
    int n;
    cin >> n;
    v weights(n), values(n);
    for (int i = 0; i < n; i++)
    {
        cin >> values[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }
    int capacity;
    cin >> capacity;

    log(unboundedKnapsack(weights, values, capacity, n));
}

int main()
{

    solve();
    return 0;
}
