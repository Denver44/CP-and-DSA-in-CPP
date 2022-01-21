#include <iostream>
#include <vector>
using namespace std;

// old_buy_state_Profit   obsp
// old_sell_state_Profit  ossp
// new_buy_state_profit    nbsp
// new_sell_state_profit   nssp
class Solution
{
public:
    int maxProfit(vector<int> &prices, int fee)
    {
        int obsp = -prices[0];
        int ossp = 0; // first day profit will be zero it is obvious.

        for (int i = 1; i < prices.size(); i++)
        {
            int nbsp;
            int nssp;
            if (ossp - prices[i] > obsp)
            {
                nbsp = ossp - prices[i];
            }
            else
            {
                nbsp = obsp;
            }

            if (obsp + prices[i] - fee > ossp)
            {
                nssp = obsp + prices[i] - fee;
            }
            else
            {
                nssp = ossp;
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