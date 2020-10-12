#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    int nr;
    cin >> nr;
    double total_loss = 0;
    while (nr--)
    {
        double price, Qty, discount_rate;
        cin >> price >> Qty >> discount_rate;
        double new_price = price + price * (discount_rate / 100);
        // cout << "New price " << new_price << endl;
        double soldprice = new_price - new_price * (discount_rate / 100);
        // cout << "Sold price " << soldprice << endl;
        double loss = price - soldprice;
        // cout << "Loss  " << loss << endl;
        total_loss = total_loss + (Qty * loss);
        // cout << "Toatalloss  " << total_loss << endl;
    }
    cout << total_loss << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}