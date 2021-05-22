#include <iostream>
#include <vector>
using namespace std;

// old_buy_state_Profit   obsp
// old_sell_state_Profit  ossp
// new_buy_state_profit    nbsp
// new_sell_state_profit   nssp

// as -1 is more greater than -2.
class Solution
{
public:
    int maxProfit(vector<int> &prices, int fee)
    {
        int obsp = -prices[0]; // as we get loan on first day for this much amount.
        int ossp = 0;          // first day profit will be zero it is obvious.

        for (int i = 1; i < prices.size(); i++)
        {
            int nbsp, nssp;
            if (ossp - prices[i] > obsp) // the lasttime profit - today price if we get better deal than yesterday then we should buy stocks today.
            {
                nbsp = ossp - prices[i];
            }
            else
            {
                nbsp = obsp; // otherwise keep going on.
            }

            if (obsp + prices[i] - fee > ossp) // as lasttimestock prices + todaysprice - fees if it greater than old state profit then we should sell it.
            {                                  // as our loan is negative thats why we added.
                nssp = obsp + prices[i] - fee;
            }
            else
            {
                nssp = ossp; // otherwise keep going on.
            }

            obsp = nbsp;
            ossp = nssp;
        }
        cout << ossp << endl;
        return ossp;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        prices.push_back(a);
    }

    Solution s1;
    s1.maxProfit(prices, 2);

    return 0;
}